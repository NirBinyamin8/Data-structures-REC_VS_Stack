#include "CityNode.h"
CityNode::CityNode(int x, CityNode* next1)
{
	num = x;
	next = next1;
}
CityNode* CityNode::getnext()
{
	return(next);
}
void CityNode::setnum(int x)
{
	num = x;
}
int CityNode::getnum()
{
	return num;
}
void CityNode::changepointer(CityNode* next1)
{
	next = next1;
}