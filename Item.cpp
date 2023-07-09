#include "Item.h"

Item::Item(int moked1, int yaad1, int min1, int line1)
{
	min = min1;
	moked = moked1;
	yaad = yaad1;
	line = line1;

}
int Item::GetMoked()
{
	return moked;
}
int Item::GetYaad()
{
	return yaad;
}
int Item::GetLine()
{
	return line;
}
void Item::SetMoked(int x)
{
	moked = x;
}
void Item::SetLine(const int x)
{
	line = x;
}
void Item::SetMin(int x)
{
	min = x;
}
int Item::GetMin()
{
	return min;
}
