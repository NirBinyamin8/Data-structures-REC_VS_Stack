#ifndef ITEM_H
#define ITEM_H
#include "CityList.h"
#include "CityNode.h"

class Item
{
private:
	
	int moked;
	int yaad;
	int line;
	int min=-1;
	

public :
	Item() = default;
	Item(int moked1, int yaad1,int min1 , int line1);
	int GetMoked();
	void SetMoked(int x);
	int GetYaad();
	int GetLine();
	void SetLine(const int x);
	void SetMin(int x);
	int GetMin();

};
#endif

