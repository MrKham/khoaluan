#include<iostream>
#include <cstdlib>
#include <ctime>
#include "Individu.h"
#include "CrossoverOX.h"
using namespace std;
void swap(int& x, int& y)
{
	int tt = x;
	x = y;
	y = tt;
}
int main()
{
	CrossoverOX *ox = new CrossoverOX();
	srand(time(0));
	ox->getParent1();
	ox->getPatent2();
	vector<int> Child;
	int x = 1 + rand() % (100);
	int y = 1 + rand() % (100);
	if (x > y)
		swap(x, y);

	// Khoi tao mang 100 Child
	Child.resize(100);

	// sao chep P1[x]->P1[y] vao Child[x]->Child[y]
	for (int i = x; i <= y; i++)
	{
		Child.at(i) = ox->P1->chromT.at(i);
	}

	//Con lai Lay tu P2 dua vao Child.
	int tt = 0;
	for (int i = 1; i < 100; i++)
	{
		for (int j = x; j <= y; j++)
		{
			if (ox->P2->chromT.at(i) == Child.at(j))
			{
				tt = 1;
				break;
			}
			else
				tt = 0;
		}
		if (tt == 1)
			i--;
		else
			Child.at(i) = ox->P2->chromT.at(i);
	}
	// Ket qua cua Child
	for (int i = 1; i < 100; i++)
	{
		cout << Child.at(i) << " ";
	}
	system("pause");
	return 0;
}