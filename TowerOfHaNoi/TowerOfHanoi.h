#pragma once
#include <vector>

using namespace std;

class towerOfHanoi
{
	//char start, from;
public:
	
	//towerOfHanoi();

	void getInputDisk(vector <int>& v);
	void getInputTower(char &from, char &to);
	void moveTower(vector<int>& A, vector<int>& B, vector<int>& C, char start, char end);


	//void checkEmpty(vector<int>& A, vector<int>& B, vector<int>& C, char input);



	void output(vector <int> v);

	//
};

//towerOfHanoi::towerOfHanoi() 
//{
//	start = '/0';
//	from = '/0';
//}

//void towerOfHanoi::checkEmpty(vector<int>& A, vector<int>& B, vector<int>& C, char input)
//{
//	if (input == 'a')
//	{
//		if (A.empty())
//		{
//			cout << "\n\tERROR: Cannot make the move. There is no disk in the selected peg-A. Please choose again.\n\n";
//			char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
//			start = from;
//			char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
//			end = to;
//		}
//	}
//}