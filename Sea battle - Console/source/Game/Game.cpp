#include <Game/Game.h>

Game::Game(Player* p1, Player* p2)
{
	player1 = p1;
	player2 = p2;
}

void Game::start()
{
	player1->placeAllShips();
	player2->placeAllShips();

	auto p1Board = player1->getBoard();
	auto p2Board = player2->getBoard();

	while (true)
	{
		std::cout << "\nTurn " << player1->getName()<< ":\n";
		player1->getBoard().printBoard(false);
		player1->takeShotAt(p2Board);

		if (player2->hasLost())
		{
			std::cout << player1->getName() << " Win!\n";
			break;
		}

		std::cout << "\nTurn " << player2->getName() << ":\n";
		player2->takeShotAt(p1Board);

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