#include<iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0)); 

    while (true) {
        cout << "Choose your move: Rock (0), Paper (1), Scissors (2): ";
        int playerMove;
        cin >> playerMove;

        if (playerMove < 0 || playerMove > 2) {
            cout << "Invalid move. Please choose again." << endl;
            continue;
        }

        int computerMove = rand() % 3; 

        cout << "Computer chose: ";
        if (computerMove == 0)
            cout << "Rock";
        else if (computerMove == 1)
            cout << "Paper";
        else
            cout << "Scissors";

        cout << endl;

        if (playerMove == computerMove)
            cout << "It's a tie!" << endl;
        else if ((playerMove == 0 && computerMove == 2) || (playerMove == 1 && computerMove == 0) || (playerMove == 2 && computerMove == 1))
            cout << "You win!" << endl;
        else
            cout << "Computer wins!" << endl;

        cout << "Do you want to play again? (y/n): ";
        char playAgain;
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y')
            break;
    }

    cout << "Thanks for playing!" << endl;
    return 0;
}
