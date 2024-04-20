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

#include <bitset>
#include "../../util/Bitboard.h"
#include "../../ChessBoard.h"
#include "../../SearchManager.h"

namespace tb_constants {
    static constexpr array<uchar, 32> DECODE = {0, 1, 2, 3, 0xf, 0xf, 0xf, 0xf, 4, 5, 6, 7, 0xf, 0xf, 0xf, 0xf, 8,
                                                9, 10, 11, 0xf, 0xf, 0xf, 0xf, 12, 13, 14, 15};
}
class Tables {
public:
    typedef std::bitset<22> bitset22;

    static bool generate(string path, _Tchessboard &chessboard, const int sideToMove);

    static int get_quadrant(const u64 c);

    static bool search(const _Tchessboard &c);
//    static void generate_kqkr(const bitset22 idx);


private:
    Tables() {};

/*

        idx tot 22 bits
        ..k.|.q|.q..|.k|.k..|.r|.r..
         4  |2 | 4  |2 | 4  |2 | 4

        Quadrant:
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

    static constexpr array<bitset22, 2> KQKR = {999, 999};


};