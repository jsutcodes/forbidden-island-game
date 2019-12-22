#ifndef _WATER_LEVEL_HPP_
#define _WATER_LEVEL_HPP_

//#include "Observer.hpp"

#define MAX_WATER_LEVEL 3 

class WaterLevel 
{

 public:
  WaterLevel(int level);
  ~WaterLevel();
  getWaterLevel();
  incrementWaterLevel();
  // is this a speration of concerns??
  addObserver(Observer newObserver);
  removeObserver();
  notify();
 private:
  int level;
  bool isSpecialActionCard;
  Observer observers;
 };
#endif
