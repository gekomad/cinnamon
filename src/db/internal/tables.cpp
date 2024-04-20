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


#include "../../util/Bitboard.h"
#include "../../ChessBoard.h"

namespace tables {
    namespace {
/*
        Q2 Q1
        Q3 Q4

    15 14 13 12
    11 10 09 08
    07 06 05 04
    03 02 01 00
*/
        const static u64 Q1 = 0xf0f0f0f00000000ull;
        const static u64 Q2 = 0xf0f0f0f000000000ull;
        const static u64 Q3 = 0xf0f0f0f0ull;
        const static u64 Q4 = 0xf0f0f0full;
        static constexpr array<uchar, 32> DECODE = {0, 1, 2, 3, 0xf, 0xf, 0xf, 0xf, 4, 5, 6, 7, 0xf, 0xf, 0xf, 0xf, 8,
                                                    9, 10, 11,
                                                    0xf,
                                                    0xf, 0xf, 0xf, 12, 13, 14, 15};
    }

    bool kqkr(const _Tchessboard &c) {
        _Tchessboard chessboard;
        memcpy(chessboard, c, sizeof(_Tchessboard));
        if (Q1 & chessboard[KING_WHITE]) {
            // flip vertical
            chessboard[KING_WHITE] = flipVertical(chessboard[KING_WHITE]);
            chessboard[QUEEN_WHITE] = flipVertical(chessboard[QUEEN_WHITE]);
            chessboard[KING_BLACK] = flipVertical(chessboard[KING_BLACK]);
            chessboard[ROOK_BLACK] = flipVertical(chessboard[ROOK_BLACK]);
        } else if (Q2 & chessboard[KING_WHITE]) {
            // flip vertical
            // flip horizontal
            chessboard[KING_WHITE] = flipVertical(chessboard[KING_WHITE]);
            chessboard[QUEEN_WHITE] = flipVertical(chessboard[QUEEN_WHITE]);
            chessboard[KING_BLACK] = flipVertical(chessboard[KING_BLACK]);
            chessboard[ROOK_BLACK] = flipVertical(chessboard[ROOK_BLACK]);

            chessboard[KING_WHITE] = flipHorizontal(chessboard[KING_WHITE]);
            chessboard[QUEEN_WHITE] = flipHorizontal(chessboard[QUEEN_WHITE]);
            chessboard[KING_BLACK] = flipHorizontal(chessboard[KING_BLACK]);
            chessboard[ROOK_BLACK] = flipHorizontal(chessboard[ROOK_BLACK]);
        } else if (Q3 & chessboard[KING_WHITE]) {
            // flip horizontal
            chessboard[KING_WHITE] = flipHorizontal(chessboard[KING_WHITE]);
            chessboard[QUEEN_WHITE] = flipHorizontal(chessboard[QUEEN_WHITE]);
            chessboard[KING_BLACK] = flipHorizontal(chessboard[KING_BLACK]);
            chessboard[ROOK_BLACK] = flipHorizontal(chessboard[ROOK_BLACK]);
        }
        const int pos_kw = DECODE[BITScanForward(chessboard[KING_WHITE])];
        const int pos_qw = BITScanForward(chessboard[QUEEN_WHITE]);
        const int pos_kb = BITScanForward(chessboard[KING_BLACK]);
        const int pos_rb = BITScanForward(chessboard[ROOK_BLACK]);
        const int quad_qw=2;
        const int quad_rb=3;
        const int quad_kq=1;
        ChessBoard::display(c);
        ChessBoard::display(chessboard);

        // pos king_w 4 bits translate to quadrant 4

        // quadrant queen_w 2 bits
        // position queen_w 4 bits translate to quadrant 4

        // quadrant king_b 2 bits
        // position king_b 4 bits translate to quadrant 4

        // quadrant rook_b 2 bits
        // position rook_b 4 bits translate to quadrant 4

        // tot 20 bits
        //..k.|.q|.q..|.k|.k..|.r|.r..
        // 4  |2 | 4  |2 | 4  |2 | 4
        #define PACK_KING1(a) ((a) << 18)
        #define PACK_QUADRANT_QUEEN(a) ((a) << 16)
        #define PACK_QUEEN(a) ((a) << 12)
        #define PACK_QUADRANT_KING2(a) ((a) << 10)
        #define PACK_KING2(a) ((a)<<6)
        #define PACK_QUADRANT_ROOK(a) ((a) << 4)
        #define PACK_ROOK(a) (a)
        const unsigned short idx = PACK_KING1(pos_kw) | PACK_QUADRANT_QUEEN(quad_qw)| PACK_QUEEN(pos_qw)| PACK_QUADRANT_KING2(quad_kq)|PACK_KING2(pos_kb)|PACK_QUADRANT_ROOK(quad_rb)| PACK_ROOK(pos_rb);

        cout << idx<<"|"<<-999<<endl;
    }
}