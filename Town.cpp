#include "Town.h"
Town::Town(int i, int num)
{
	name = i;
	road = new Town * [num];
}

Town::~Town()
{
	delete[]road;
}
int Town::get_name()
{
	return name;
}

void Town::add_to_road(Town* other)
{
	bool flag = false;
	for (int i= 0; i < num_of_roads; i++)
	{
		if (road[i]->get_name() == other->get_name())
			flag = true;
	}
	if (!flag)
	{
		road[num_of_roads] = other;
		num_of_roads++;
		other->add_to_road(this);
	}
}
void Town::sort_the_roads()
{
	if (num_of_roads != 0 || num_of_roads != 1)
	{
		qsort(road, num_of_roads, sizeof(Town*), comper);

	}
	
}
Town** Town::get_roads()
{
	return(road);
}
