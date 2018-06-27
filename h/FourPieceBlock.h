#ifndef FOUR_PIECE_BLOCK
#define FOUR_PIECE_BLOCK

#include "./OnePieceBlock.h"

class FourPieceBlock{
private:
  int yPosition;
  int xPosition;
protected:
  OnePieceBlock* pieces;
  FourPieceBlock(int xPosition, int yPosition);
public:
  int** getBlockPositions(); //[[x,y], [x,y], [x,y],[x,y]]
  bool canGoDown(int** board, int rows);
  void goDown(int** board, int rows);
};

#endif
