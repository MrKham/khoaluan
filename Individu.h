#pragma once
#include<iostream>
#include<vector>
using namespace std;
class Individu {
	public:
		// mang khach hang chormT[i];
		vector<int> chromT;

		// edge[i][j]: luu khoang cach di tu i -> j;
		vector< vector<int> > edge;

		//cost[i][j]: tong chi phi di tu i den j
		vector< vector<int> > cost;

		// khoi tao class
		Individu();
};