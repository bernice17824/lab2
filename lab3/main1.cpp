#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include "calculate.h"
using namespace std;

int main()
{
	const int VEC_SIZE =8;
	vector<int> weight(VEC_SIZE);

	readFile (weight, VEC_SIZE);
	reverseSort (weight);
	cout << sumOfTopFive(weight) <<endl;
}	
