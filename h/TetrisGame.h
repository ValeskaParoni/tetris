#include "TetrisBoard.h"
#include <math.h>
#include <stdlib.h>
#include <thread>

class TetrisGame{
private:
  int columns;
  int rows;
  TetrisBoard* board;
  FourPieceBlock* fallingBlock;
  void standardRun();
public:
  TetrisGame(int board_rows, int board_columns);
  void run();
};
