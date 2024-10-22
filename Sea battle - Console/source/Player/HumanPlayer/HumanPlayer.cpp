#include <Player/HumanPlayer/HumanPlayer.h>

std::pair<int, int> HumanPlayer::getShotCoordinates()
{
	int x, y;
	std::cout << name << ", enter coordinates for your shot (x y): ";
	std::cin >> x >> y;
	return { x, y };
}