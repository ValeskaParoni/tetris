#include <iostream>
#include "../h/TetrisGame.h"
#include "../h/LBlock.h"

TetrisGame::TetrisGame(int board_rows, int board_columns){
  this->board = (TetrisBoard*) malloc (sizeof(TetrisBoard));
  this->board[0] = TetrisBoard(board_rows, board_columns);
  this->columns = board_columns;
  this->rows = board_rows;
}
void TetrisGame::run(){
  this->fallingBlock = (LBlock*) malloc (sizeof(LBlock));
  this->fallingBlock[0] = LBlock(0, floor((this->columns-2)/2));
  std::thread first(&TetrisGame::standardRun, this);
  first.join();
}

void TetrisGame::standardRun(){
  while (this->fallingBlock->canGoDown(this->board->copyFixedSurface(), this->rows)){
    std::this_thread::sleep_for(std::chrono::seconds(1));
    if (this->fallingBlock->canGoDown(this->board->copyFixedSurface(), this->rows)){
      system("clear");
      this->fallingBlock->goDown(this->board->copyFixedSurface(), this->rows);
      this->board->createSuperiorSurface(this->fallingBlock);
      this->board->printSuperiorSurface();
      std::cout << "\n";
    }
  }
}
