#pragma once
#include <iostream>
#include <GameBoard/GameBoard.h>

namespace SeaBattle
{
	class Player
	{
	public:
		Player(const std::string& name);
		virtual std::pair<int, int> getShotCoordinates() = 0;
		void placeAllHumanShips();
		void placeAllBotShips();
		void checkCoordinates(int& x, int& y);
		bool takeShotAt(GameBoard& opponentBoard);
		bool hasLost() const;
		std::string getName() const { return name; }
		GameBoard getBoard() const { return board; }
		std::string name;
		GameBoard board;
	};
}