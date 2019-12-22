#ifndef _TREASURE_CARD_HPP_
#define _TREASURE_CARD_HPP_

#include "util/TreasureType.hpp"

class TreasureCard
{
 public:
  TreasureCard(TreasureType type);
  TreasureCard(TreasureType type, bool isSpecialActionCard);
  ~TreasureCard();
  TreasureType getValue();
  bool isSpecialActionCard();

 private:
  TreasureType _type;
  bool _isSpecialActionCard;
 };
#endif
