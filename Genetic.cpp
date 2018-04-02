#include "Genetic.h"
#include <cstdlib>
#include <ctime>
Genetic::Genetic()
{
	P1= new Individu();
	P2 = new Individu();	
}
void Genetic::getParent1()
{
	int trung1 = 0;
	for (int i = 1; i < 100; i++)
	{
		int x = 1 + rand() % (100);
		for (int j = 0; j < i; j++)
		{
			if (P1->chromT.at(j) == x)
			{
				trung1 = 1;
				break;
			}
			else
				trung1 = 0;
		}
		if (trung1 == 1)
			i--;
		else
			P1->chromT.at(i) = x;
	}
}
void Genetic::getPatent2()
{
	int trung1 = 0;
	for (int i = 1; i < 100; i++)
	{
		int x = 1 + rand() % (100);
		for (int j = 0; j < i; j++)
		{
			if (P2->chromT.at(j) == x)
			{
				trung1 = 1;
				break;
			}
			else
				trung1 = 0;
		}
		if (trung1 == 1)
			i--;
		else
			P2->chromT.at(i) = x;
	}
}
void Genetic::crossOX()
{
	int x = 1 + rand() % (100);
	int y = 1 + rand() % (100);
	if (y < x)
	{
		int tt = x;
		x = y;
		y = tt;
	}
	// coppy P1[i] -> P1[j] vao Child[i] -> Child[j] 
	for (int i = x; i <= y; i++)
	{
		Child.at(i) = P1->chromT.at(i);
	}
	// tao mang danh dau vi tri da co
	vector<int> tt;
	tt.resize(100);
	for (int i = 1; i < 100; i++)
	{
		for (int j = x; j <= y; j++)
		{
			if (P1->chromT.at(j) == P2->chromT.at(i))
			{
				tt.at(i) = 1;
				break;
			}
		}
	}

	// Copy tu 1 -> x-1
	for (int i = 1; i < x; i++)
	{
		for (int j = 1; j < 100; j++)
		{
			if (tt.at(j) == 0)
			{
				Child.at(i) = P2->chromT.at(j);
				tt.at(j) = 1;
				break;
			}
		}

	}

	// coppy tu y+1->100
	for (int i = y + 1; i < 100; i++)
	{
		for (int j = 1; j < 100; j++)
		{
			if (tt.at(j) == 0)
			{
				Child.at(i) = P2->chromT.at(j);
				tt.at(j) = 1;
				break;
			}
		}

	}
}