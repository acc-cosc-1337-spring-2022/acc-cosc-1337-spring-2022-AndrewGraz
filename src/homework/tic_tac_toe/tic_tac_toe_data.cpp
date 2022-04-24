//cpp
#include "tic_tac_toe_data.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

 void TicTacToeData::save_games(const std::vector<std::unique_ptr<TicTacToe>>& games)
{
    ofstream writer;
    writer.open(file);
    if(writer.is_open())
    {
        for(auto& game: games)
        {
            for(auto& peg: game ->get_pegs())
            {
                writer << peg;
            }
            writer << game -> get_winner() << "\n";
        }
    }
    writer.close();

}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
    std::vector<std::unique_ptr<TicTacToe>> boards;
    std::ifstream reader;
    reader.open(file);
    std::string line;

    if(reader.is_open())
    {
        while(std::getline(reader, line))
        {
            std::vector<std::string> pegs;
            for(int i = 0; i < (line.length()-1); i++)
            {
                std::string ch(1, line[i]);
                pegs.push_back(ch);
            }
            std::string winner{line[line.size()-1]};
            std::unique_ptr<TicTacToe> board;
            if(pegs.size() == 9)
            {
                board = std::make_unique<TicTacToe3>(pegs, winner);
            }
            else if(pegs.size() == 16)
            {
                board = std::make_unique<TicTacToe4>(pegs, winner);
            }

            boards.push_back(std::move(board));
        }
        reader.close();
    }
    return boards; 
}
