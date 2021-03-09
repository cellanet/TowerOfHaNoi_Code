//gia minh
// 03/05/2021

#include <iostream>
#include "TowerOfHanoi.h"

using namespace std;

int main()
{
	towerOfHanoi game;

	vector <int> towerA;
	vector <int> towerB;
	vector <int> towerC;

	// input the disks into towerA
	game.getInputDisk(towerA);

	//test input
	game.output(towerA);

	//towerB.push_back(0);
	char from, to;
	
	//asking the user where to move
	game.getInputTower(from, to);

	int oriSizeA = towerA.size();
	int sizeB = towerB.size();


	//game.moveTower(towerA, towerB, towerC, from, to);

	while (!(oriSizeA == towerB.size()))
	{
		game.moveTower(towerA, towerB, towerC, from, to);
	}
	

	


	//=============== testing ===============

	//tower.output(towerB);

	/*vector <int> a;
	vector <int> b;

	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);

	int sizea = a.size();
	int sizeb = b.size();

	cout << sizeb;

	while ((!a.empty() && !(b.size()== sizea)))
	{
		b.push_back(a.back());
		a.pop_back();
		cout << "1 ";
	}
	
	for (int i = 0; i < b.size(); i++)
		cout << b.at(i);*/


	return 0;
}