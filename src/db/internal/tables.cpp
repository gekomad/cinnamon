/*
    Cinnamon UCI chess engine
    Copyright (C) Giuseppe Cannella

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



#include "tables.h"
#include "kqkr.h"

bool Tables::generate(_Tchessboard &chessboard, const int sideToMove, SYZYGY &syzygy) {

    SearchManager &searchManager = Singleton<SearchManager>::getInstance();
    const string fen = searchManager.getSearch(0).boardToFen();
//     searchManager.loadFen("1rk5/8/1K6/8/8/1Q6/8/8 w - - 0 1"); //
    GenMoves &genMoves = searchManager.getSearch();
    u64 friends = genMoves.sideToMove == WHITE ? board::getBitmap<WHITE>(chessboard) : board::getBitmap<BLACK>(
            chessboard);
    u64 enemies = genMoves.sideToMove == BLACK ? board::getBitmap<WHITE>(chessboard) : board::getBitmap<BLACK>(
            chessboard);

    genMoves.incListId();
    genMoves.generateCaptures(genMoves.sideToMove, enemies, friends);
    genMoves.generateMoves(genMoves.sideToMove, friends | enemies);
    _Tmove *move;
    u64 oldKey = chessboard[ZOBRISTKEY_IDX];
    uchar oldEnpassant = genMoves.enPassant;
//    genMoves.display();

//    unsigned res = syzygy.SZtbProbeWDL(chessboard, genMoves.sideToMove);
//    cout << "current: ";
//    if (res != TB_RESULT_FAILED) {
//        res = TB_GET_WDL(res);
//        if (res == TB_DRAW)cout << " draw" << endl;
//        else if (res == TB_LOSS || res == TB_BLESSED_LOSS)
//            cout << " loss" << endl;
//        else
//            cout << " win" << endl;
//
//    } else
//        cout << " none" << endl;
    int win = 0;
    int draw = 0;
    int loss = 0;

    for (int i = 0; i < genMoves.getListSize(); i++) {
        move = &genMoves.genList[genMoves.listId].moveList[i];
        if (!genMoves.makemove(move, false)) {
            genMoves.takeback(move, oldKey, oldEnpassant, false);
            continue;
        }
        //genMoves.print(move);

        unsigned res = syzygy.SZtbProbeWDL(chessboard, X(genMoves.sideToMove));

        if (res != TB_RESULT_FAILED) {
            res = TB_GET_WDL(res);
            if (res == TB_DRAW)draw = 1;
            else if (res == TB_LOSS || res == TB_BLESSED_LOSS)
                win = 1;
            else loss = 1;
        }
        genMoves.takeback(move, oldKey, oldEnpassant, false);
    }

    genMoves.decListId();
//    auto res = searchManager.SZtbProbeWDL();
//    syzygy.SZtbProbeWDL(chessboard, sideToMove);
//
//
//    if (res != TB_RESULT_FAILED) {
//        res = TB_GET_WDL(res);
//        if (res == TB_WIN || res == TB_CURSED_WIN) return true;
//    }
    return win + draw + loss > 1;
}

int Tables::get_quadrant(const u64 c) {
    if (c & Q1)return 1;
    if (c & Q2)return 2;
    if (c & Q3)return 3;
    return 4;
}


//void Tables::generate_kqkr(const bitset22 idx) {}
bool Tables::search(const _Tchessboard &c) {
//    return Kqkr::search(c);
    return false;
}