#include <Game/Game.h>
#include <Player/ComputerPlayer/ComputerPlayer.h>
#include <Player/HumanPlayer/HumanPlayer.h>

using namespace SeaBattle;

Game::Game(Player* p1, Player* p2)
{
	player1 = p1;
	player2 = p2;
}

void Game::start()
{
	player1->placeAllHumanShips();
	player2->placeAllBotShips();

	while (true)
	{
		std::cout << "\nTurn " << player1->getName()<< ":\n";
		player1->getBoard().printBoard(true);
		player2->getBoard().printBoard(false);
		player1->takeShotAt(player2->board);

		if (player2->hasLost())
		{
			std::cout << player1->getName() << " Win!\n";
			break;
		}

		std::cout << "\nTurn " << player2->getName() << ":\n";
		player2->takeShotAt(player1->board);

		if (player1->hasLost())
		{
			std::cout << player2->getName() << " Loss!\n";
			break;
		}
	}
}

bool Game::isGameOver() const {
	return player1->hasLost() || player2->hasLost();
}