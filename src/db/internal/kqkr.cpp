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

#pragma once

#include "kqkr.h"

bool Kqkr::search(const _Tchessboard &c) {
    _Tchessboard chessboard;
    memcpy(chessboard, c, sizeof(_Tchessboard));
    const int quad_kw = Tables::get_quadrant(BITScanForward(chessboard[KING_WHITE]));
    switch (quad_kw) {
        case 1 :
            // flip vertical
            chessboard[KING_WHITE] = flipVertical(chessboard[KING_WHITE]);
            chessboard[QUEEN_WHITE] = flipVertical(chessboard[QUEEN_WHITE]);
            chessboard[KING_BLACK] = flipVertical(chessboard[KING_BLACK]);
            chessboard[ROOK_BLACK] = flipVertical(chessboard[ROOK_BLACK]);
            break;
        case 2 :
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
            break;
        case 3 :
            // flip horizontal
            chessboard[KING_WHITE] = flipHorizontal(chessboard[KING_WHITE]);
            chessboard[QUEEN_WHITE] = flipHorizontal(chessboard[QUEEN_WHITE]);
            chessboard[KING_BLACK] = flipHorizontal(chessboard[KING_BLACK]);
            chessboard[ROOK_BLACK] = flipHorizontal(chessboard[ROOK_BLACK]);
    }
    const int pos_kw = tb_constants::DECODE[BITScanForward(chessboard[KING_WHITE])];
    const int pos_qw = BITScanForward(chessboard[QUEEN_WHITE]);
    const int pos_kb = BITScanForward(chessboard[KING_BLACK]);
    const int pos_rb = BITScanForward(chessboard[ROOK_BLACK]);
    const int quad_qw = Tables::get_quadrant(pos_qw);
    const int quad_kq = Tables::get_quadrant(pos_kb);
    const int quad_rb = Tables::get_quadrant(pos_rb);
    ASSERT(quad_qw <= 4);
    ASSERT(quad_kq <= 4);
    ASSERT(quad_rb <= 4);
    ChessBoard::display(c);
    ChessBoard::display(chessboard);

    // pos king_w 4 bits translate to quadrant 4

    // quadrant queen_w 2 bits
    // position queen_w 4 bits translate to quadrant 4

    // quadrant king_b 2 bits
    // position king_b 4 bits translate to quadrant 4

    // quadrant rook_b 2 bits
    // position rook_b 4 bits translate to quadrant 4


    #define PACK_KING1(a) ((a) << 18)
    #define PACK_QUADRANT_QUEEN(a) ((a) << 16)
    #define PACK_QUEEN(a) ((a) << 12)
    #define PACK_QUADRANT_KING2(a) ((a) << 10)
    #define PACK_KING2(a) ((a)<<6)
    #define PACK_QUADRANT_ROOK(a) ((a) << 4)
    #define PACK_ROOK(a) (a)
    const unsigned idx =
            PACK_KING1(pos_kw) | PACK_QUADRANT_QUEEN(quad_qw) | PACK_QUEEN(pos_qw) | PACK_QUADRANT_KING2(quad_kq) |
            PACK_KING2(pos_kb) | PACK_QUADRANT_ROOK(quad_rb) | PACK_ROOK(pos_rb);

    const auto i = static_cast<Tables::bitset22>(idx);
    return Kqkr::find(i);

}
