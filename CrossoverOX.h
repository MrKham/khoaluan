#pragma once
#include "Individu.h"
#include <iostream>
#include <vector>
using namespace std;
class CrossoverOX {
	public:
		// Khoi tao 2 cha
		Individu * P1;
		Individu * P2;

		// Mang chua child
		vector<int> Child;

		// Khoi tao class
		CrossoverOX();
		// Ham tao cha ngau nhieu
		void getParent1();
		void getPatent2();
};