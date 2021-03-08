#pragma once
#include <vector>

using namespace std;

class towerOfHanoi
{
public:
	void getInputDisk(vector <int>& v);
	void getInputTower(char &from, char &to);
	void moveTower(vector<int>& A, vector<int>& B, vector<int>& C, char start, char end);

	void output(vector <int> v);
};