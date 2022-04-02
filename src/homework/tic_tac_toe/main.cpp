#include "tic_tac_toe.h"

using std::cout; using std::cin; using std::string;

int main() 
{

    TicTacToe game;
    string first_player;
    char choice;
    int position;

    do
    {
        do
        {
            cout << "Enter first player (X or O): ";
            cin >> first_player;
            if (first_player != "X" && first_player != "O")
            {
                cout<< "Sorry that was an invalid input. \n";
            }
        } while(first_player != "X" && first_player != "O");

		game.start_game(first_player);
        
		while(game.game_over() == false)
        {
            cout << "Enter position [1-9]";
            cin >> position;

            game.mark_board(position);
            game.display_board();
        }

        cout << " \n The winner is: " << game.get_winner() << "\n";
        cout << "Continue type Y: ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');
    

    return 0;
}
