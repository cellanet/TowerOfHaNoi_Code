#include "TowerOfHanoi.h"
#include "input.h"

// input the disk into tower
void towerOfHanoi::getInputDisk(vector <int>& v)
{
	int numOfDisk = inputInteger("enter number of disk 1...64: ", 1, 64);
	int reverse = numOfDisk;

	// reverse the input. Ex: if user input 5, then the function will push_back 5>4>3>2>1 into the vector
	// so that when we use pop_back the smallest will be popped out.
	for (int i = reverse; i >= 1; i--)
	{
		v.push_back(i);
	}
}

// asking user where to move the disks
void towerOfHanoi::getInputTower(char& from, char& to)
{
	 from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
	 to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
}

//test to see if input was push in correctly
void towerOfHanoi::output(vector <int> v)
{
	int temp = v.size();

	for (int i = 0; i < temp; i++)
		cout << v.at(i);
}

// depends on the answer from getInputTower(char& from, char& to)
// function will move disk from A->B, or B->... accordingly to the user input
void towerOfHanoi::moveTower(vector<int>& A, vector<int>& B, vector<int>& C, char start, char end)
{
	//int temp = A.size();
	/*while ((!A.empty() && (!B.size() == temp)) || (!A.empty() && (!C.size() == temp)))
	{*/
		while (true)
		{
			//move from Tower A -> Tower B
			if (start == 'a' && end == 'b')
			{
				//If tower A is empty, there will be no disk to move to B (giver)
				if (A.empty())
				{
					cout << "\n\tERROR: Cannot make the move. There is no disk in the selected peg-A. Please choose again.\n\n";
					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
				// if B is empty, push_back disk from tower A (receiver)
				else if (B.empty())
				{
					B.push_back(A.back());
					A.pop_back();
					break;
				}
				// rule: only smaller disk can be placed on top
				else if (A.back() < B.back())
				{
					B.push_back(A.back());
					A.pop_back();
					break;
				}
				else
				{
					cout << "\nERROR: Cannot make the move. Top disk ";
					cout << A.back() << " is larger than top disk ";
					cout << B.back();
					cout << "\n\t	Please choose again.\n\n";

					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
			}
			// move from A->C
			else if (start == 'a' && end == 'c')
			{
				if (A.empty())
				{
					cout << "\n\tERROR: Cannot make the move. There is no disk in the selected peg-A. Please choose again.\n\n";
					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
				else if (C.empty())
				{
					C.push_back(A.back());
					A.pop_back();
					break;
				}
				else if (A.back() < C.back())
				{
					C.push_back(A.back());
					A.pop_back();
					break;
				}
				else
				{
					cout << "\nERROR: Cannot make the move. Top disk ";
					cout << A.back() << " is larger than top disk ";
					cout << C.back();
					cout << "\n\t	Please choose again.\n\n";

					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
			}
			// move from B->A
			else if (start == 'b' && end == 'a')
			{
				if (B.empty())
				{
					cout << "\n\tERROR: Cannot make the move. There is no disk in the selected peg-B. Please choose again.\n\n";
					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
				else if (A.empty())
				{
					A.push_back(B.back());
					B.pop_back();
					break;
				}
				else if (B.back() < A.back())
				{
					A.push_back(B.back());
					B.pop_back();
					break;
				}
				else
				{
					cout << "\nERROR: Cannot make the move. Top disk ";
					cout << B.back() << " is larger than top disk ";
					cout << A.back();
					cout << "\n\t	Please choose again.\n\n";

					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
			}
			// move from B->C
			else if (start == 'b' && end == 'c')
			{
				if (B.empty())
				{
					cout << "\n\tERROR: Cannot make the move. There is no disk in the selected peg-B. Please choose again.\n\n";
					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
				else if (C.empty())
				{
					C.push_back(B.back());
					B.pop_back();
					break;
				}
				else if (B.back() < C.back())
				{
					C.push_back(B.back());
					B.pop_back();
					break;
				}
				else
				{
					cout << "\nERROR: Cannot make the move. Top disk ";
					cout << B.back() << " is larger than top disk ";
					cout << C.back();
					cout << "\n\t	Please choose again.\n\n";

					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
			}
			// move from C->A
			else if (start == 'c' && end == 'a')
			{
				if (C.empty())
				{
					cout << "\n\tERROR: Cannot make the move. There is no disk in the selected peg-C. Please choose again.\n\n";
					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
				else if (A.empty())
				{
					A.push_back(C.back());
					C.pop_back();
					break;
				}
				else if (C.back() < A.back())
				{
					A.push_back(C.back());
					C.pop_back();
					break;
				}
				else
				{
					cout << "\nERROR: Cannot make the move. Top disk ";
					cout << C.back() << " is larger than top disk ";
					cout << A.back();
					cout << "\n\t	Please choose again.\n\n";

					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
			}
			// move from C->B
			else if (start == 'c' && end == 'b')
			{
				if (C.empty())
				{
					cout << "\n\tERROR: Cannot make the move. There is no disk in the selected peg-C. Please choose again.\n\n";
					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
				else if (B.empty())
				{
					B.push_back(C.back());
					C.pop_back();
					break;
				}
				else if (C.back() < B.back())
				{
					B.push_back(C.back());
					C.pop_back();
					break;
				}
				else
				{
					cout << "\nERROR: Cannot make the move. Top disk ";
					cout << C.back() << " is larger than top disk ";
					cout << B.back();
					cout << "\n\t	Please choose again.\n\n";

					char from = inputChar("Select the top disk from the start peg (A, B, C, or Q-quit):", "abc");
					start = from;
					char to = inputChar("Select the end peg (A, B, C or Q-quit) to move the selected disk:", "abc");
					end = to;
				}
			}
		}
	//}
}