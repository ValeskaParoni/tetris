#include <iostream>
#include "../h/TetrisGame.h"

TetrisGame::TetrisGame(int board_rows, int board_columns){
  TetrisBoard board = TetrisBoard(board_rows, board_columns);
  board.print();
  std::cout << "TetrisGame created" << "\n";
}
void TetrisGame::run(){
  std::cout << "Runnign" << "\n";
}
