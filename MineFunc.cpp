#include "MineFunc.h"
int TownDistanceRec(CityList* state, int moked, int yaad, bool* color)
{
	int min;
	color[moked] = false;
	if (moked == yaad)
		return 0;
	else
	{
		if (!(ThereWhiteNib(color,state[moked])))
			return -1;
		else
		{
			CityNode* cur = state[moked].First();
			while (cur != nullptr)
			{
				if (color[cur->getnum()])
				{
					min=TownDistanceRec(state, cur->getnum(), yaad, color);
					if (min != -1)
						return(min + 1);
				}
				cur = cur->getnext();
			}
			return -1;


		}
	}
}
bool ThereWhiteNib( bool* color,CityList& moked)
{
	CityNode* cur;
	if (moked.IsEmpthy())
		return false;
	else
	{
		cur = moked.First();
		while (cur)
		{
			if (color[cur->getnum()])
			{
				return true;
			}
			cur = cur->getnext();
		}

	}
	return false;

}
int BringWhiteNib(bool* color, CityList& moked)
{
	CityNode* cur;
	if (moked.IsEmpthy())
		return -1;
	else
	{
		cur = moked.First();
		while (cur)
		{
			if (color[cur->getnum()])
			{
				return cur->getnum();
			}
			cur = cur->getnext();
		}

	}
	return -1;

}


int TownDistance(CityList* state, int moked, int yaad, bool* color)
{
	vector <Item> v;
	int all=0;
	bool flag = false;
	Item next(moked, yaad, -1, START);
	int n;
	
	
	Item cur (moked, yaad, -1, START);
	color[moked] = false;

	v.push_back(cur);

	while (!v.empty())
	{
		cur = v[v.size() - 1];
		v.pop_back();

		switch (cur.GetLine())
		{
		case AFTER_FIRST:
		{
			if (ThereWhiteNib(color, state[cur.GetMoked()]) && cur.GetMin() == -1)
			{
				cur.SetLine(START);
				v.push_back(cur);

			}
			else
			{
				if (cur.GetMin() != -1)
				{
					all = cur.GetMin();
					if (!v.empty())
					{
						flag = true;
						int newmin = all + 1;
						cur = v[v.size() - 1];
						v.pop_back();
						cur.SetMin(newmin);
						v.push_back(cur);

						

					}

				}
			}
		}
		break;

		case START:
		{
			if (cur.GetMoked() == yaad)
			{
				cur.SetMin(0);
				cur.SetLine(AFTER_FIRST);
				v.push_back(cur);
			}
			else
			{
				n = BringWhiteNib(color, state[cur.GetMoked()]);
				
				if (n != -1)
				{
					color[n] = false;
					cur.SetLine(AFTER_FIRST);
					v.push_back(cur);
					next.SetLine(START);
					next.SetMoked(n);
					v.push_back(next);
				}


			}
		}
		break;
			
			


		}
			

	}
	if (flag)
	{
		return all;
	}
	else
		return -1;




}
