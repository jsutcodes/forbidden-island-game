#ifndef _ADVENTURETILE_HPP_
#define _ADVENTURETILE_HPP_

#include "util/IslandName.hpp"
#include <iostream>
using namespace std;

enum TileState
{
	INVALID = -1,
	NORMAL = 0,
	FLOODED= 1,
	SUNK=2 
};

class AdventureTile {
    public:
        AdventureTile(IslandName name);
        ~AdventureTile();
        TileState getState();
        void floodTile();
        void sandBagTile();
        IslandName getName();
    private:
      IslandName _name;
      TileState _state;
};
#endif
