#include "Board/Board.hpp"

// Board::Board() {

// }

Board::~Board() {

}

AdventureTile Board::getTile(int x, int y) {

}

void Board::setTile(int x, int y) {

}

void Board::getDistance(AdventureTile& t1, AdventureTile& t2) {
	// distance = sqroot( (x2 -x1)^2 + (y2- y1)^2  )

}
/*
* return -1 if error tile, otherwise
* returns correct tile map index 
*/
int Board::getTileIndex(const int x, const int y) {
	
	int retVal;
	bool isValidCordinate = false;

	switch(y) {
		case 0: case 5: 
			if(x == 0 || x == 1 || x == 4 || x == 5) {
				retVal = -1;
			} else {
				isValidCordinate=true;
			}
		break;
		case 1: case 4: 
			if (x == 0 || x == 5) {
				retVal = -1; 
			} else {
				isValidCordinate=true;
			}
		break;
		// no need to do 2 and 3
		//case 2: break; 
		//case 3: break;
		default:
			if (x > -1 && x < 6 && y > -1 && y < 6) {
				isValidCordinate =true;
			} else {
				// invalid spot
				retVal =-1;
			}
		break;
	}

	// there is a better way to do this. 
	// figure out the formula
	if(isValidCordinate) {
		retVal = 0;
	}

	return retVal;
}

