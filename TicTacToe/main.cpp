#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include "input.h"
using namespace std;


void displayTicTacToe(const char game[][3])
{
    cout << "\n";
    cout << "\t " << game[0][0] << " " << char(179) << " " << game[0][1] << " " << char(179) << " " << game[0][2] << "\n";
    cout << "\t" << string(3, char(196)) << char(197) << string(3, char(196)) << char(197) << string(3, char(196)) << "\n";
    cout << "\t " << game[1][0] << " " << char(179) << " " << game[1][1] << " " << char(179) << " " << game[1][2] << "\n";
    cout << "\t" << string(3, char(196)) << char(197) << string(3, char(196)) << char(197) << string(3, char(196)) << "\n";
    cout << "\t " << game[2][0] << " " << char(179) << " " << game[2][1] << " " << char(179) << " " << game[2][2] << "\n";
    cout << "\n";
}


bool markgame(char game[][3], int r, int c, char m)
{
    if (game[r][c] == 'X' || game[r][c] == 'O')
        return false;
    game[r][c] = m;
    return true;
}

bool checkWinner(const char game[][3], char m)
{
    for (int r = 0; r < 3; r++)
        if (game[r][0] == m && game[r][1] == m && game[r][2] == m)
            return true;

    for (int c = 0; c < 3; c++)
        if (game[0][c] == m && game[1][c] == m && game[2][c] == m)
            return true;

    if ((game[0][0] == m && game[1][1] == m && game[2][2] == m) || (game[2][0] == m && game[1][1] == m && game[0][2] == m))
        return true;

    return false;
}

bool checkTie(const char game[][3])
{
    for (int r = 0; r < 3; r++)
        for (int c = 0; c < 3; c++)
            if (game[r][c] == ' ')
                return false;
    return true;

}

int main()
{
    string caption = "Tic-Tac-Toe Game\n";
    cout << caption;
    cout << string(caption.length() + 10, char(196)) << "\n\n";

    char game[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };
    displayTicTacToe(game);

    int player = 1;

    while (true)
    {
        if (player == 1)
            cout << "Player1 (X)\n";
        else
            cout << "Player2 (O)\n";
        do
        {
            int r = inputInteger("Enter the row (1..3): ", 1, 3) - 1;
            int c = inputInteger("Enter the column (1..3): ", 1, 3) - 1;

            if (player == 1)
                if (!markgame(game, r, c, 'X'))
                    cout << "ERROR: location (" << r + 1 << ", " << c + 1 << ") has been taken. Please re-specify.\n\nPlayer1 (X)\n";
                else
                    break;
            else
                if (!markgame(game, r, c, 'O'))
                    cout << "ERROR: location (" << r + 1 << ", " << c + 1 << ") has been taken. Please re-specify.\n\nPlayer2 (O)\n";
                else
                    break;
        } while (true);

        displayTicTacToe(game);;

        if ((player == 1) && (checkWinner(game, 'X')))
        {
            cout << "Player 1 is the winner!\n";
            break;
        }
        else if ((player == 2) && (checkWinner(game, 'O')))
        {
            cout << "Player 2 is the winner!\n";
            break;
        }
        else if (checkTie(game))
        {
            cout << "Tie game. Play again.\n";
            break;
        }
        player = (player == 1) ? 2 : 1;
    }

    return 0;
}