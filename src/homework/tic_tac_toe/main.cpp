#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


using std::cout; using std::cin; using std::string;

int main() 
{

    unique_ptr <TicTacToe> game;
    TicTacToeManager manager;
    string first_player;
    char choice;
    int o, w, t; 

    do
    {
        int three_or_four = 0;
        while (three_or_four != 3 && three_or_four != 4)
        {
            cout << "DO you want to play TicTacToe 3x3 or 4x4: \nenter 3 or 4 \n";
            cin >> three_or_four;
            if (three_or_four != 3 && three_or_four != 4)
            {
                cout << "You did not enter a correct choice.";
            }
        }
        
        if (three_or_four == 3)
        {
            game = make_unique<TicTacToe3>();
        }
        else if(three_or_four == 4)
        {
            game = make_unique<TicTacToe4>();
        }

        do
        {
            cout << "Enter first player (X or O): ";
            cin >> first_player;
            if (first_player != "X" && first_player != "O")
            {
                cout<< "Sorry that was an invalid input. \n";
            }
        } while(first_player != "X" && first_player != "O");

		game -> start_game(first_player);
        
		while(game -> game_over() == false)
        {
            cin >> *game;
            cout << *game;
        }

        cout << " \n The winner is: " << game ->get_winner() << "\n";
        manager.save_game(game);
        manager.get_winner_total(o, w, t);

        cout << "Continue type Y: ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');
    
    cout << " \n Every Game Played";
    cout << manager;

    return 0;
}
