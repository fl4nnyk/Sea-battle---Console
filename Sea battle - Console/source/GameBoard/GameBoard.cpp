#include <GameBoard/GameBoard.h>  

GameBoard::GameBoard()  
{  
   const int width = 10;  
   const int height = 10;  

   bool miss = false;
   bool ship = false;
   bool hit = false;

   char board[width][height];  
   for (int i = 0; i < width; i++)  
   {  
       for (int j = 0; j < height; j++)  
       {  
           board[i][j] = '~';  
       }  
   }

   for (int i = 0; i < width; i++)
   {
	   for (int j = 0; j < height; j++)
	   {
		   std::cout << board[i][j];
	   }
	   std::cout << std::endl;
   }

   bool isGameRunning = true;
   bool isPlayerTurn = true;
   bool isPlayerWin = false;
   bool isComputerWin = false;
   while (isGameRunning)
   {
	   if (isPlayerTurn)
	   {
		   // Player turn
	   }
	   else
	   {
		   // Computer turn
	   }
   }
   
}  

GameBoard::~GameBoard()  
{  
}
