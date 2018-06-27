#include <iostream>
#include "../h/TetrisGame.h"
#include "../h/LBlock.h"

TetrisGame::TetrisGame(int board_rows, int board_columns){
  TetrisBoard board = TetrisBoard(board_rows, board_columns);
  board.print();
  std::cout << "TetrisGame created" << "\n";
  LBlock a = LBlock(3, 4);
  std::cout << "Block created" << "\n";
}
void TetrisGame::run(){
  std::cout << "Runnign" << "\n";
}
