#include <Player/ComputerPlayer/ComputerPlayer.h>

std::pair<int, int> ComputerPlayer::getShotCoordinates()
{
	int x = rand() % 5;
	int y = rand() % 5;
	return { x, y };
}