#include <GameBoard/GameBoard.h>  

GameBoard::GameBoard()  
{    
	board = std::vector<std::vector<char>>(5, std::vector<char>(5, '~'));
	shipsRemaining = 3;
}  

void GameBoard::placeShips(int x, int y)
{
	if (board[x][y] == '~')
	{
		board[x][y] = 'S';
	}
}

bool GameBoard::reciveShot(int x, int y)
{
	if (board[x][y] == 'S')
	{
		board[x][y] = 'X';
		shipsRemaining--;
		return true;
	}
	else
	{
		board[x][y] = 'O';
		return false;
	}
}

void GameBoard::printBoard(bool showShips) const
{
	std::cout << "  0 1 2 3 4\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << " ";
		for (int j = 0; j < 5; j++)
		{
			if (board[i][j] == 'X' || board[i][j] == 'O' || showShips)
				std::cout << board[i][j] << " ";
			else
				std::cout << "~ ";
		}
		std::cout << std::endl;
	}
}

bool GameBoard::allShipsSunk() const
{
	return shipsRemaining == 0;
}

