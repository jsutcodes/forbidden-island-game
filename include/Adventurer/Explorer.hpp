#ifndef _EXPLORER_HPP_
#define _EXPLORER_HPP_

#include <math.h>
#include <SFML/Graphics.hpp>
#include "util/Constants.hpp"
#include "Card/TreasureCard.hpp"

class Explorer {
    public:
      Explorer();
      ~Explorer();

       virtual bool canMove() = 0;
       virtual bool canShoreUp() = 0;
       virtual bool canGiveTreasureCard() = 0;
       virtual bool canCaptureTreasure() = 0;
       virtual bool canDrawCard() = 0;
    private:
       int actionPoints;
	   TreasureCard hand[7]; // max hand size is 5, 
       // can only draw 2 extra? so total is 7 MAX at
       // one time ???
};
#endif

