#include "CityList.h"
#include "CityNode.h"
#include "MineFunc.h"



int main()
{
	int num_of_cities;
	CityList* state;
	int num_of_roads;
	int road1, road2;
	bool* color;//white=true black =false
	int min,min_rec;
	int moked, yaad;
	



	
	cin >> num_of_cities;
	if (num_of_cities < 1)
	{
		cout << "invalid input\n";
		exit(1);
	}
	state = new CityList[num_of_cities+1];
	for (int i = 1; i <= num_of_cities; i++)
	{
		state[i].MakeAList(i);
	}

	color = new bool[num_of_cities+1];
	for (int i = 1; i <= num_of_cities; i++)
	{
		color[i] = true;
	}

	cin >> num_of_roads;
	for (int i = 0; i < num_of_roads; i++)
	{
		cin >> road1;
		cin >> road2;
		if (road1 > num_of_cities||road1<1)
		{
			cout << "invalid input\n";
			exit(1);
			
		}
		if (road2 > num_of_cities||road2<1)
		{
			cout << "invalid input\n";
			exit(1);
			
		}

		state[road1].InsertSort(road2);
		state[road2].InsertSort(road1);




	}

	
	cin >> moked;
	if (moked > num_of_cities || road1 < 1)
	{
		cout << "invalid input\n";
		exit(1);

	}
	
	cin >> yaad;
	if (yaad > num_of_cities || road1 < 1)
	{
		cout << "invalid input\n";
		exit(1);

	}

	min_rec = TownDistanceRec(state, moked, yaad, color);
	cout << "\nPreferred distance (recursive algorithm): " << min_rec;

	for (int i = 1; i <= num_of_cities; i++)
	{
		color[i] = true;
	}

	


	
	min = TownDistance(state, moked, yaad,color);
	cout << "\nPreferred distance (iterative stack algorithm): " << min;







	
}