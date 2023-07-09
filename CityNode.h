#ifndef CITYNODE_H
#define CITYNODE_H
#include <iostream>
using namespace std;
class CityNode
{
private:
	int num;
	CityNode* next;
public:
	CityNode() = default;
	CityNode(int x, CityNode* next1);
	CityNode* getnext();
	void setnum(int x);
	int getnum();
	void changepointer(CityNode* next1);
};
#endif