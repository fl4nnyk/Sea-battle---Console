#pragma once
#include <Player/Player.h>
#include <cstdlib>

using namespace SeaBattle;

class ComputerPlayer : public Player
{
public:
    ComputerPlayer(const std::string& name) : Player(name) {}
    std::pair<int, int> getShotCoordinates() override;
};

