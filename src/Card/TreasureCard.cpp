#include "Card/TreasureCard.hpp"

TreasureCard::TreasureCard(TreasureType type): _isSpecialActionCard(false) {
	_type = type;
}

TreasureCard::TreasureCard(TreasureType type, bool isSpecialActionCard) {
	_type = type;
	_isSpecialActionCard = isSpecialActionCard;
}

TreasureCard::~TreasureCard() {
	// Doesn't do anything at this point 
}

TreasureType TreasureCard::getValue() {
	return _type; 
}

bool TreasureCard::isSpecialActionCard() {
	return _isSpecialActionCard;
}

