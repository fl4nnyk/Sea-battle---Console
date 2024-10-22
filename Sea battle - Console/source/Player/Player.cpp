#include <Player/Player.h>

using namespace SeaBattle;

Player::Player(const std::string& name) : name(name) {}

bool Player::takeShotAt(GameBoard& opponentBoard) 
{
    std::pair<int, int> coordinates = getShotCoordinates();
    int x = coordinates.first;
    int y = coordinates.second;
	return opponentBoard.reciveShot(x, y);
}
void Player::placeAllHumanShips()
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

void Player::placeAllBotShips()
{
	std::cout << name << ", place all ships on your field:\n";
	for (int i = 0; i < board.shipsRemaining; ++i)
	{
		int x = rand() % 5;
		int y = rand() % 5;
		board.placeShips(x, y);
	}
}

//void Player::checkCoordinates(int& x, int& y)
//{
//	if (0 >= x > 4 || 0 >= y > 4)
//	{
//		board.placeShips(x, y);
//	}
//	else
//	{
//		std::cout << "Invalid coordinates. Please enter coordinates for ship (x y): ";
//		std::cin >> x >> y;
//		checkCoordinates(x, y);
//	}
//}

bool Player::hasLost() const
{
	return board.allShipsSunk();
}