#ifndef TOWN_H
#define TOWN_H
#include <iostream>
using namespace std;
#include "Func.h"
class Town
{
private:
	int name;
	Town** road;
	int num_of_roads = 0;
public :
	Town(int i, int num);
	~Town();
	void add_to_road(Town* other);
	int get_name();
	void sort_the_roads();
	Town** get_roads();




};

#endif // !TOWN_H

