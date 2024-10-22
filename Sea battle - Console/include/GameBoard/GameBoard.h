#pragma once
#include <iostream>
#include <vector>
class GameBoard
{
public:
	GameBoard();
	void printBoard(bool showShips) const;
	void placeShips(int x, int y);
	bool allShipsSunk() const;
	bool reciveShot(int x, int y);
	int shipsRemaining;
private:
	std::vector<std::vector<char>> board;
};