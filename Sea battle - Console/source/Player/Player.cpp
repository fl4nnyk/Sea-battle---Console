#include <Player/Player.h>

using namespace SeaBattle;

Player::Player(const std::string& name) : name(name) {}

void Player::placeAllShips() 
{
	std::cout << name << ", place all ships on your field:\n";
	for (int i = 0; i < board.shipsRemaining; ++i) 
	{
		int x, y;
		std::cout << "Enter coordinates for ship " << i + 1 << " (x y): ";
		std::cin >> x >> y;
		board.placeShips(x, y);
	}
}

bool Player::takeShotAt(GameBoard& opponentBoard) 
{
    std::pair<int, int> coordinates = getShotCoordinates();
    int x = coordinates.first;
    int y = coordinates.second;
	return opponentBoard.reciveShot(x, y);
}

bool Player::hasLost() const
{
	return board.allShipsSunk();
}