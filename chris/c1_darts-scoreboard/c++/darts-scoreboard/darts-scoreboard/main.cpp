#include <iostream>
using namespace std;

class Game {
public:
    string gameType;
    int players;
    int playerTurn = 1;
};

class Player {
public:
    int totalScore = 0;
    int roundScore;
};

void initGame()
{
    Game game;
    
    std::cout << "Enter game (\"cricket\" or \"301\"): " << endl;
    std::cin >> game.gameType;
    std::cout << "\nYou've chosen to play: " << game.gameType << "\n" << endl;
    std::cout << "Enter the number of players: " << endl;
    std::cin >> game.players;
    std::cout << "\n" << game.players << " player game \n" << endl;
    
    // Instantiate as many Player instances as there are players
    // TODO: make this more dynamic and prob move to its own function
    Player player_1;
    std::cout << "Player 1 score: " << player_1.totalScore << endl;
    if (game.players == 2) {
        Player player_2;
        std::cout << "Player 2 score: " << player_2.totalScore << endl;
    } else if (game.players == 3) {
        Player player_2;
        Player player_3;
        std::cout << "Player 2 score: " << player_2.totalScore << endl;
        std::cout << "Player 3 score: " << player_3.totalScore << endl;
    } else if (game.players == 4) {
        Player player_2;
        Player player_3;
        Player player_4;
        std::cout << "Player 2 score: " << player_2.totalScore << endl;
        std::cout << "Player 3 score: " << player_3.totalScore << endl;
        std::cout << "Player 4 score: " << player_4.totalScore << endl;
    }
    
    // Move this to the function that will handle player turn logic
    std::cout << "\nIt's player " << game.playerTurn << "'s turn, shoot your darts!" << endl;
    std::cout << "Enter what you scored when you're done:" << endl;
    std::cin >> player_1.roundScore;
    std::cout << "\nPlayer 1 scored " << player_1.roundScore << " points" << endl;
    player_1.totalScore = player_1.totalScore + player_1.roundScore;
    std::cout << "Player 1's total score is: " << player_1.totalScore << " points" << endl;
};

int main()
{
    initGame();
    
    std::cout << "____________\n";
};
