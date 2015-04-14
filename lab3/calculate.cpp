#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

void readFile(vector<int>& weight, int veSsize)
	ifstream file("fileIn.txt",ios::in);
	for(int i=0; i < vecSize; i++)
		file >> weight.at(i);
}

void reserveSort(vector<int>& weight){
	sort(weight.begin(), weight.end());
	reverse(weight.begin(), weight.end());
}

int sumOfTopFive(vector<int>& weight){
	int topFiveSum = 0;
	for(int i=0;i<5; i++)
		topFiveSum += weight.at(i);
	return topFiveSum;
}
