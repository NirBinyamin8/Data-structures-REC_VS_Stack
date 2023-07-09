#ifndef MineFunc_H
#define MineFunc_H
#include "CityList.h"
#include "CityNode.h"
#include <iostream>
#include <vector>
#include "Item.h"
using namespace std;
#define START 0
#define AFTER_FIRST 1



int TownDistanceRec(CityList* state, int moked, int yaad,bool*color);
bool ThereWhiteNib(bool* color, CityList& moked);
int TownDistance(CityList* state, int moked, int yaad, bool* color);
int BringWhiteNib(bool* color, CityList& moked);

#endif // !MineFunc_H
