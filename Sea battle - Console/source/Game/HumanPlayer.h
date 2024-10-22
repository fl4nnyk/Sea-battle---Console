#pragma once
#include <Player/Player.h>

using namespace SeaBattle;

class HumanPlayer : public Player
{
public:
    HumanPlayer(const std::string& name) : Player(name) {}
    std::pair<int, int> getShotCoordinates() override;
};
