#ifndef ONE_PIECE_BLOCK
#define ONE_PIECE_BLOCK

#include <iostream>

class OnePieceBlock{
private:
  int yPosition;
  int xPosition;
  int absoluteXPosition(int xPosition);
  int absoluteYPosition(int yPosition);
public:
  OnePieceBlock(int xPosition, int yPosition);
  int* getAbsolutePosition(int xPosition, int yPosition);
  bool canMove(int xPosition, int yPosition, int** board, int maxPosition, int distance, char XorY);
};

#endif
