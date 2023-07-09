#include "CityList.h"
void CityList::MakeAList(int num)
{
	number = num;
	CityNode* dummy = new CityNode(-1,nullptr);
	head =dummy ;
	tail = nullptr;

}
void CityList::InsertSort(int x)
{
	CityNode* other = new CityNode(x,nullptr);
	if (this->IsEmpthy())
	{
		head->changepointer(other);
		tail = other;

	}
	else
	{
		CityNode* temp = head;
		while (temp->getnext() != nullptr && (temp->getnext()->getnum() < other->getnum()))
		{
			temp = temp->getnext();
		}
		if (temp->getnext() == nullptr)
		{
			temp->changepointer(other);
			tail = other;


		}
		else
		{
			other->changepointer(temp->getnext());
			temp->changepointer(other);
		}

	}
}
bool CityList::IsEmpthy()
{
	if (head->getnext() == nullptr)
		return true;
	else
		return false;

}
CityNode* CityList::First()
{
	if (this->IsEmpthy())
		return nullptr;
	else
		return head->getnext();
}
CityNode* CityList::Last()
{
	if (this->IsEmpthy())
		return nullptr;
	else
		return tail;

}
CityNode* CityList::Find(int x)
{
	if (this->IsEmpthy())
		return nullptr;
	else
	{
		CityNode* temp = head->getnext();
		while (temp != nullptr)
		{
			if (temp->getnum() == x)
				return temp;
			else
				temp = temp->getnext();
		}
		return nullptr;
		
	}
}
CityList::~CityList()
{
	if (this->IsEmpthy())
	{
		delete head;
	}
	else
	{
		CityNode* temp = head;
		CityNode* next;
		while (temp != nullptr)
		{
			next = temp->getnext();
			delete temp;
			temp = next;
			
		}
		

	}
}