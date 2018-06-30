#include "TetrisBoard.h"
#include <math.h>
#include <stdlib.h>
#include <thread>
#define KEY_LEFT 75
#define KEY_RIGHT 77


class TetrisGame{
private:
  int columns;
  int rows;
  TetrisBoard* board;
  FourPieceBlock* fallingBlock;
  void standardRun();
  void userInteraction();
public:
  TetrisGame(int board_rows, int board_columns);
  void run();
};
