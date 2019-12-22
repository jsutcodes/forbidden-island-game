#include "Board/AdventureTile.hpp"

AdventureTile::AdventureTile(IslandName name) {
    _state = NORMAL;
    _name = name;
}

AdventureTile::~AdventureTile() {

}

TileState AdventureTile::getState() {
  return _state;
}

void AdventureTile::floodTile(){
  TileState tileState;

  if (_state == NORMAL)
  {
    tileState = FLOODED;
  }
  else if (_state == FLOODED) 
  {
    tileState = SUNK;
  } else if (_state == SUNK) 
  {
    // should never see this
    cout << "EXCEPTION: Should never sink a sunken tile." << endl;
  }

  _state = tileState;
}

void AdventureTile::sandBagTile() {
  TileState tileState;

  if (_state == FLOODED)
  {
    tileState = NORMAL;
  } 
  else 
  {
    // should never see this
    cout << "EXCEPTION: Should only be able to shore up a flooded tile." << endl;
  }

  _state = tileState;
}

IslandName AdventureTile::getName() {
  return _name;
}

