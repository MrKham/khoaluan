#include "CrossoverOX.h"
#include <cstdlib>
#include <ctime>
CrossoverOX::CrossoverOX()
{
	P1= new Individu();
	P2 = new Individu();	
}
void CrossoverOX::getParent1()
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
void CrossoverOX::getPatent2()
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