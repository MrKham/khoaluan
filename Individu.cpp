#include "Individu.h"
#include <cstdlib>
#include <ctime>
#include <vector>
Individu::Individu()
{
	// tao ra 100 khach hang, hoan vi cua 100
	chromT.resize(100);

	// tao ngau nhien khoang cach di tu i -> j ;
	edge.resize(100);
	for (int i = 0; i < 100; i++)
	{
		edge.at(i).resize(100);
		for (int j = 0; j < 100; j++)
		{
			if (i == j)
			{
				edge.at(i).at(j) = 0;
			}
			else
			{
				int x = 5 + rand() % (20);
				edge.at(i).at(j) = x;
			}
		}
	}
}
