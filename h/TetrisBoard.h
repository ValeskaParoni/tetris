#ifndef TETRIS_BOARD
#define TETRIS_BOARD

#include "./FourPieceBlock.h"
#include <cstring>

class TetrisBoard{
  friend class TetrisGame;
private:
  int rows;
  int columns;
  int** fixedSurface;
  int** superiorSurface;
  TetrisBoard(int rows, int columns);
  int** updateSurface(int** surface, FourPieceBlock* block);
  void print(int** surface);
public:
  int** copyFixedSurface();
  void printFixedSurface();
  void printSuperiorSurface();
  void createSuperiorSurface(FourPieceBlock* block);
  void updateFixedSurface(FourPieceBlock* block);
};

#endif
