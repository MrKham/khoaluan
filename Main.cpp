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
	
	// Ket qua cua Child
	for (int i = x; i <= y; i++)
	{
		cout << Child.at(i) << " ";
	}
	system("pause");
	return 0;
}