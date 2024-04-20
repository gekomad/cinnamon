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

bool Tables::generate(string path, _Tchessboard &chessboard, const int sideToMove) {

    SearchManager &searchManager = Singleton<SearchManager>::getInstance();
    SYZYGY::getInstance().createSYZYGY(path, false);

    auto res = searchManager.SZtbProbeWDL();
    SYZYGY::getInstance().SZtbProbeWDL(chessboard, sideToMove);


    if (res != TB_RESULT_FAILED) {
        res = TB_GET_WDL(res);
        if (res == TB_WIN || res == TB_CURSED_WIN) return true;
    }
    return false;

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