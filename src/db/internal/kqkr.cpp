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

void Kqkr::generate(SYZYGY &syzygy) {
    SearchManager &searchManager = Singleton<SearchManager>::getInstance();
    Search &g = searchManager.getSearch(0);
    g.clearChessboard();
    g.sideToMove = WHITE;
    ///////
    searchManager.loadFen("8/3Q4/8/1rk5/8/8/8/4K3 w - - 0 1");
    const auto idx1 = Kqkr::get_idx(searchManager.getSearch(0).chessboard);
    searchManager.loadFen("8/8/8/5kr1/8/8/8/3KQ3 w - - 0 1");
    const auto idx2 = Kqkr::get_idx(searchManager.getSearch(0).chessboard);
    ///////
    for (int pos_kw = 0; pos_kw < 64; pos_kw++) {
        g.chessboard[KING_WHITE] = POW2(pos_kw);
        for (int pos_kb = 0; pos_kb < 64; pos_kb++) {
            g.chessboard[KING_BLACK] = POW2(pos_kb);
            for (int pos_qw = 0; pos_qw < 64; pos_qw++) {
                g.chessboard[QUEEN_WHITE] = POW2(pos_qw);
                for (int pos_rb = 0; pos_rb < 64; pos_rb++) {
                    g.chessboard[ROOK_BLACK] = POW2(pos_rb);
                    if (NEAR_MASK1[pos_kw] & g.chessboard[KING_BLACK])continue;
                    if (bitCount(board::getBitmap(g.chessboard)) != 4)continue;
                    if (board::inCheck1<BLACK>(g.chessboard))continue;

                    const auto idx = Kqkr::get_idx(g.chessboard);
                    const auto win = Tables::generate(g.chessboard, g.sideToMove, syzygy) ? "ok" : "ko";
                    const auto fen = g.boardToFen();

                    cout << fen << "|" << idx << "|" << win << endl;
                }
            }
        }
    }
}

int Kqkr::get_idx(const _Tchessboard &c) {
    _Tchessboard chessboard;
    memcpy(chessboard, c, sizeof(_Tchessboard));
    const int quad_kw = Tables::get_quadrant(chessboard[KING_WHITE]);
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

    const int quad_qw = Tables::get_quadrant(chessboard[QUEEN_WHITE]);
    const int quad_kq = Tables::get_quadrant(chessboard[KING_BLACK]);
    const int quad_rb = Tables::get_quadrant(chessboard[ROOK_BLACK]);
    ASSERT(quad_qw <= 4);
    ASSERT(quad_kq <= 4);
    ASSERT(quad_rb <= 4);
//    ChessBoard::display(c);
//    ChessBoard::display(chessboard);

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
    const int pos_qw = tb_constants::DECODE[BITScanForward(chessboard[QUEEN_WHITE])];
    const int pos_kb = tb_constants::DECODE[BITScanForward(chessboard[KING_BLACK])];
    const int pos_rb = tb_constants::DECODE[BITScanForward(chessboard[ROOK_BLACK])];

    const unsigned idx =
            PACK_KING1(pos_kw) | PACK_QUADRANT_QUEEN(quad_qw) | PACK_QUEEN(pos_qw) | PACK_QUADRANT_KING2(quad_kq) |
            PACK_KING2(pos_kb) | PACK_QUADRANT_ROOK(quad_rb) | PACK_ROOK(pos_rb);
    return idx;
//    const auto i = static_cast<Tables::bitset22>(idx);
//    return Kqkr::find(i);

}
