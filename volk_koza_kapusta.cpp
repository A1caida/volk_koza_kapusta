#include <iostream>
#include <vector>
#include <ctime>


using namespace std;

bool sum(vector<int>& left) // 4 3 1 5 4
{
	int sum;
	if (left[0]==4)
	{
		if (left[0] - left[1] == left[2])
		{
			if (left[0] + left[2] == left[3])
			{
				return (left[0] == left[4]);
			}
		}
	}
	return false;
}

int main()
{
	vector<int> left;
	int temp = 1;
	setlocale(LC_ALL, "Russian");

	cout << "В\tk\tкап" << endl << "0\t1\t2\t-на левый" << endl << "3\t4\t5\t-на правый" << endl;

	for (size_t i = 0; i < 5; i++)
	{
		left.push_back(rand() % 5 + 1);
	}

	while (!sum(left))
	{
		srand(time(0)/temp);
		left.clear();
		for (size_t i = 0; i < 5; i++)
		{
			left.push_back(rand() % 5 + 1);
		}
		temp++;
	}

	cout << endl;
	for (size_t i = 0; i < 5; i++)
	{
		cout << left[i] << "\t";
	}

}