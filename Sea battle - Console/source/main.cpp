#include <cstdlib>  
#include <ctime>     
#include <Game/Game.h>
#include <Player/HumanPlayer/HumanPlayer.h>  
#include <Player/ComputerPlayer/ComputerPlayer.h>  

using namespace SeaBattle;

int main()
{
    srand(time(0));  

    Player* player1 = new HumanPlayer("Player");
    Player* player2 = new ComputerPlayer("Bot");

    Game game(player1, player2);
    game.start();

    delete player1;
    delete player2;

    return 0;
}