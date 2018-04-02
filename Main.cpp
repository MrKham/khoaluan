#include<iostream>
#include <cstdlib>
#include <ctime>
#include "Individu.h"
#include "Genetic.h"
using namespace std;
void swap(int& x, int& y)
{
	int tt = x;
	x = y;
	y = tt;
}
int main()
{
	Genetic * ox = new Genetic();
	ox->getParent1();
	ox->getPatent2();
	ox->crossOX();
	for (int i = 1; i < 100; i++)
	{
		cout << ox->P1->chromT.at(i)<<" ";
	}
	cout << "\n";
	for (int i = 1; i < 100; i++)
	{
		cout << ox->P2->chromT.at(i) << " ";
	}
	system("pause");
	return 0;
}