/*
Copyright (C) 2008-2010
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "maindefine.h"
#include "stdafx.h"
#include "utility.h"
#include "search.h"
#include "gen.h"
#include "cap.h"
#include "eval.h"
#include "zobrist.h"
#ifdef _MSC_VER
#include "LIMITS.H"
#endif
#include "extern.h"
#ifndef PERFT_MODE
int
quiescence ( int alpha, const int side, int beta ) {
  if ( !run )
    return 0;
#ifdef DEBUG_MODE
  check_side ( side );
  assert ( chessboard[KING_BLACK] );
  assert ( chessboard[KING_WHITE] );
  if ( !side && !chessboard[KING_BLACK] || side && !chessboard[KING_WHITE] ) {
    assert ( 0 );
  }

  assert ( chessboard[KING_BLACK] );
  assert ( chessboard[KING_WHITE] );
#endif

  int score = -_INFINITE;
  if ( !( num_movesq++ & 1023 ) )
    if ( !( run = still_time (  ) ) )
      return score;
  int i, xside, listcount;
  Tmove *mossa;
  u64 key = 0;
  if ( use_book )
    key = makeZobristKey (  );
  score = eval ( side
#ifdef FP_MODE
		 , alpha, beta
#endif
		 , key );
  if ( score >= beta ) {
    //return score;
    return beta;
  }
  xside = side ^ 1;
  if ( score > alpha )
    alpha = score;

  list_id++;
#ifdef DEBUG_MODE
  assert ( list_id < MAX_PLY );
#endif
  if ( generateCap ( STANDARD, side ) ) {
    gen_list[list_id--][0].score = 0;
    return _INFINITE;
  }
  listcount = gen_list[list_id][0].score;
  if ( !listcount ) {
    --list_id;
    return score;
  }
  qsort ( gen_list[list_id] + 1, listcount, sizeof ( Tmove ), compare_move );
#ifdef DEBUG_MODE
  controlloRipetizioni ( gen_list[list_id], listcount );
#endif

  for ( i = 1; i <= listcount; i++ ) {
    mossa = &gen_list[list_id][i];
    makemove ( mossa );
    score = -quiescence ( -beta, xside, -alpha );
    takeback ( mossa );
    if ( score >= beta ) {
      gen_list[list_id--][0].score = 0;
      //if ( score == _INFINITE )
      //      update_pv ( pline, &line, mossa, 0 );
      return beta;
    }
    if ( score > alpha ) {
      //update_pv ( pline, &line, mossa, 0 );
      alpha = score;
    }
  }
  gen_list[list_id--][0].score = 0;
  return alpha;
}
#endif

int
ael ( const int SIDE, int depth
#ifndef PERFT_MODE
      , int alpha, int beta, LINE * pline
#endif
   ) {
  if ( !run )
    return 0;
  //assert(!use_book);
#ifdef DEBUG_MODE
  check_side ( SIDE );
#endif
#ifdef DEBUG_MODE
  if ( !SIDE && !chessboard[KING_BLACK] || SIDE && !chessboard[KING_WHITE] ) {
    assert ( 0 );
  }
#endif

#ifndef PERFT_MODE
  /*  if ((score=recognizer())!=999){
     printf("\nRECOGNIZER");
     return score;
     }
   */
  int score = -_INFINITE;
  int is_incheck = in_check (  );
  if ( is_incheck /*|| make_extension() */  ) {
    depth++;
  }
#endif

#ifndef PERFT_MODE
  u64 key = 0;
  //if (use_book)
  key = makeZobristKey (  );
#endif
#ifdef HASH_MODE
  /*  if (repetition(key)) {
     assert(0);
     return 0;
     } */
  /*u64 r=LL[key % HASH_SIZE];
     if (LL[key % HASH_SIZE]==key)
     return eval (side,-beta,-alpha
     #ifdef HASH_MODE
     , key
     #endif
     );;
     LL[key % HASH_SIZE]=key; */

#endif

  //if (side)score= -_INFINITE;else score= _INFINITE;
  //  int xside = side ^ 1;
#ifdef DEBUG_MODE
  assert ( chessboard[KING_BLACK] );
  assert ( chessboard[KING_WHITE] );
#endif
#ifndef PERFT_MODE
  LINE line;
#endif
  if ( depth == 0 ) {
#ifdef PERFT_MODE
    ++n_perft;
    return 0;
#else

    /*
       score = eval (SIDE
       #ifdef FP_MODE
       , alpha, beta
       #endif
       , key);
     */

    score = quiescence ( alpha, SIDE, beta );

#ifdef HASH_MODE
    //RecordHash (mply, hashfEXACT, SIDE, key, score);
#endif
    pline->cmove = 0;
    return score;
#endif
  };
  ++num_moves;
#ifdef TEST_MODE
  num_moves_test++;
#endif
#ifndef PERFT_MODE
  main_depth = depth;
#endif

#ifdef FP_MODE
  int fscore, fprune, fmax = 0, mat_balance;
#endif
#ifndef PERFT_MODE
  line.cmove = 0;
  int val;

  if ( !( num_moves & 1023 ) ) {
    run = still_time (  );
  };
  if ( !run )
    return score;
#endif
#ifdef FP_MODE
	/**************Futility Pruning****************/
	/**************Futility Pruning razor at pre-pre-frontier*****/
  fprune = 0;
  if ( !path_pvv && !is_incheck ) {
    mat_balance = lazy_eval_black (  ) - lazy_eval_white (  );
    if ( SIDE )
      mat_balance = -mat_balance;
    if ( depth == 3 && n_pieces ( ( SIDE ^ 1 ) ) > 3 && ( mat_balance - RAZOR_MARGIN ) <= alpha ) {
#ifdef DEBUG_MODE
      n_cut_razor++;
#endif
      depth--;
    }
		/**************Futility Pruning at pre-frontier*****/
    if ( depth == 2 && ( fscore = mat_balance - EXT_FUTILY_MARGIN ) <= alpha ) {

      fprune = 1;
      score = fmax = fscore;
    }
		/**************Futility Pruning at frontier*****/
    if ( depth == 1 && ( fscore = mat_balance - FUTIL_MARGIN ) <= alpha ) {
      fprune = 1;
      score = fmax = fscore;
    }
  }
	/************ end Futility Pruning*************/
#endif
  //************* hash ****************
#ifdef HASH_MODE
  if ( !path_pvv ) {
    Thash *phashe = &hash_array[SIDE][key % HASH_SIZE];
    if ( phashe->depth >= depth && phashe->key == key ) {
#ifdef DEBUG_MODE
      assert ( abs ( phashe->score ) != _INFINITE );
#endif
      if ( phashe->flags == hashfEXACT ) {
#ifdef DEBUG_MODE
	n_cut_hash++;
#endif
	return phashe->score;
      }
      if ( phashe->flags == hashfBETA ) {
	if ( phashe->score >= beta ) {
#ifdef DEBUG_MODE
	  n_cut_hash++;
#endif
	  return phashe->score;
	}
	if ( phashe->score > alpha )
	  alpha = phashe->score;
	if ( phashe->score > score )
	  score = phashe->score;
      }
      else if ( phashe->flags == hashfALPHA ) {
	if ( phashe->score <= alpha ) {
#ifdef DEBUG_MODE
	  n_cut_hash++;
#endif
	  return phashe->score;
	}
	if ( phashe->score < beta )
	  beta = phashe->score;
      }
    }
  }
  char hashf = hashfALPHA;
#endif
  //********** end hash ***************
  int ii, listcount;
  Tmove *mossa;
#ifndef PERFT_MODE
  int bestmove;
#endif
  list_id++;
#ifdef DEBUG_MODE
  assert ( list_id < MAX_PLY );
#endif
  Friend_king[SIDE] = BITScanForward ( chessboard[KING_BLACK + SIDE] );
  Friend_king[SIDE ^ 1] = BITScanForward ( chessboard[KING_BLACK + ( SIDE ^ 1 )] );
  if ( generateCap ( STANDARD, SIDE ) ) {
    gen_list[list_id--][0].score = 0;
    return _INFINITE;
  }
  generateMoves ( STANDARD, SIDE );
  listcount = gen_list[list_id][0].score;
  if ( !listcount ) {
    --list_id;
    /*if (!attack_square(side,BITScanForward (chessboard[KING_BLACK+side ])))       {
       #ifdef DEBUG_MODE
       //   printf("\n **** PATTA ****");
       //   print();
       #endif
       #ifdef HASH_MODE
       RecordHash (mply-depth,  hashfEXACT, side, key,0);
       #endif
       return 0;//patta
       } */
#ifdef HASH_MODE
    // RecordHash ((char) (mply - depth), hashfEXACT, SIDE, key, -_INFINITE);
#endif
    return -_INFINITE;
  }
#ifndef PERFT_MODE
  qsort ( gen_list[list_id] + 1, listcount, sizeof ( Tmove ), compare_move );
#endif
#ifdef DEBUG_MODE
  controlloRipetizioni ( gen_list[list_id], listcount );
#endif
#ifdef PERFT_MODE
  listcount_n++;
#endif

  for ( ii = 1; ii <= listcount; ii++ ) {

    mossa = &gen_list[list_id][ii];
    makemove ( mossa );

#ifdef FP_MODE
    if ( fprune && ( fmax + PIECES_VALUE[mossa->capture] <= alpha ) ) {
#ifdef DEBUG_MODE
      n_cut_fp++;
#endif
      takeback ( mossa );
      continue;
    }
#endif
    //********* null move ***********
#ifdef NULL_MODE
    if ( !path_pvv && null_ok ( depth, SIDE ) && !attack_square ( SIDE, BITScanForward ( chessboard[KING_BLACK + SIDE] ) ) ) {
      null_sem = 1;
      int null_score = -ael ( SIDE ^ 1, depth - R_adpt ( SIDE, depth ) - 1, -beta, -beta + 1, &line );
      null_sem = 0;
      if ( !run ) {
	gen_list[list_id--][0].score = 0;
	takeback ( mossa );
	return score;
      }
      if ( null_score >= beta ) {
#ifdef DEBUG_MODE
	++null_move_cut;
#endif
#ifdef HASH_MODE
	//              RecordHash (depth-nullreduction, ....);
#endif
	gen_list[list_id--][0].score = 0;
	takeback ( mossa );

	//return beta;
	return null_score;
      }
    }
#endif
    ///******* null move end ********
#ifdef PERFT_MODE
    ael ( SIDE ^ 1, depth - 1 );
    takeback ( mossa );
#else
    int do_mws = ( score > -_INFINITE );
    int lwb = _max ( alpha, score );
    int upb = ( do_mws ? ( lwb + 1 ) : beta );
    val = -ael ( SIDE ^ 1, depth - 1, -upb, -lwb, &line );
    if ( do_mws && ( lwb < val ) && ( val < beta ) )
      val = -ael ( SIDE ^ 1, depth - 1, -beta, -val + 1, &line );
    score = _max ( score, val );
    takeback ( mossa );
    mossa->score = score;
    if ( score >= beta ) {
      gen_list[list_id--][0].score = 0;
#ifdef DEBUG_MODE
      assert ( mossa->score == score );
      n_cut++;
      beta_efficency += 1 / ii;
#endif
#ifdef HASH_MODE
      RecordHash ( ( char ) ( mply - depth ), hashfBETA, SIDE, key, beta );
#endif
      ///// mate
      if ( score == _INFINITE ) {

	update_pv ( pline, &line, mossa, depth );
      }
      /////
      return score;
    }
    if ( score > alpha ) {
      alpha = score;
      bestmove = mossa->score;
#ifdef HASH_MODE
      hashf = hashfEXACT;
#endif

      update_pv ( pline, &line, mossa, depth );
    }
#endif
  }
  gen_list[list_id--][0].score = 0;
#ifdef HASH_MODE
  //RecordHash ((char) (mply - depth), hashf, SIDE, key, score);
#endif
#ifdef PERFT_MODE
  return 0;
#else
  return score;
#endif

}
