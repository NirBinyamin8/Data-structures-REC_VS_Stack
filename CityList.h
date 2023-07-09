#ifndef  CITYLIST_H
#define CITYLIST_H
#include "CityNode.h"

class CityList
{
private:
	CityNode* head;
	CityNode* tail;
	int number;

public:
	bool IsEmpthy();
	void MakeAList(int num);
	void InsertSort(int x);
	CityNode* First();
	CityNode* Last();
	CityNode* Find(int x);
	~CityList();

	


};
#endif 

