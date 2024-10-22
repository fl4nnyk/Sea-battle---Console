#pragma once
#include <iostream>
#include <Player/Player.h>
#include <GameBoard/GameBoard.h>

using namespace SeaBattle;

class Game
{
public:
	Game(Player* p1, Player* p2);
	void start();

private:
	Player* player1;
	Player* player2;
	bool isGameOver() const;
};

