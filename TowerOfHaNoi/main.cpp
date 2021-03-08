//gia minh
// 03/05/2021

#include <iostream>
#include "TowerOfHanoi.h"

using namespace std;

int main()
{
	towerOfHanoi tower;

	vector <int> towerA;
	vector <int> towerB;
	vector <int> towerC;

	// input the disks into towerA
	tower.getInputDisk(towerA);

	//test input
	tower.output(towerA);

	char from, to;

	//asking the user where to move
	tower.getInputTower(from, to);

	int sizeA = towerA.size();

	//loop until tower B or C full
	while ((!towerA.empty() && !towerB.size()==sizeA)|| (!towerA.empty() && !towerC.size() == sizeA))
	{
		//move disks between towers.
		// larger disk can't be placed on top of smaller disk
		tower.moveTower(towerA, towerB, towerC, from, to);
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