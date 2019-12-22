#ifndef _BOARD_HPP_
#define _BOARD_HPP_

#include "Board/AdventureTile.hpp"

class Board {
    public:
        Board();
        ~Board();
        AdventureTile getTile(int x, int y);
        //void getTile(AdventureTile& tile, int* x, int *y);
        void setTile(int x, int y);
        void getDistance(AdventureTile& t1, AdventureTile& t2);

    private:
      AdventureTile board[24];
      int getTileIndex(const int x, const int y);
};
#endif

//  36 total spaces     |  24 valid spaces 
//  =================== | ===================
//  +  0| 1| 2| 3| 4| 5 +  0| 1| 2| 3| 4| 5 +      
//  0|00 01 02 03 04 05 | XX XX 00 01 XX XX|0
//  1|06 07 08 09 10 11 | XX 02 03 04 05 XX|1
//  2|12 13 14 15 16 17 | 06 07 08 09 10 11|2
//  3|18 19 20 21 22 23 | 12 13 14 15 16 17|3
//  4|24 25 26 27 28 29 | XX 18 19 20 21 XX|4
//  5|30 31 32 33 34 35 | XX XX 22 23 XX XX|5
