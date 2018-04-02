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
	vector<int> tt;
	tt.resize(100);
	//Con lai Lay tu P2 dua vao Child.
	
	for (int i = 1; i < 100; i++)// danh dau vi tri da co o P1
	{
		for (int j = x; j <= y; j++)
		{
			if (ox->P1->chromT.at(j) == ox->P2->chromT.at(i))
			{
				tt.at(i) = 1;
				break;
			}
		}
	}
	for (int i = 1; i < x; i++) // Copy tu 1->x-1
	{
		for (int j = 1; j < 100; j++)
		{
			if (tt.at(j) == 0)
			{
				Child.at(i) = ox->P2->chromT.at(j);
				tt.at(j) = 1;
				break;
			}
		}
			
	}
	for (int i = y+1; i < 100; i++) // coppy tu y+1->100
	{
		for (int j = 1; j < 100; j++)
		{
			if (tt.at(j) == 0)
			{
				Child.at(i) = ox->P2->chromT.at(j);
				tt.at(j) = 1;
				break;
			}
		}

	}
	// Ket qua cua Child
	for (int i = 1; i < 100; i++)
	{
		cout << Child.at(i) << " ";
	}
	system("pause");
	return 0;
}