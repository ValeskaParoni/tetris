#include "../h/OnePieceBlock.h"

OnePieceBlock::OnePieceBlock(int xPosition, int yPosition){
  this->xPosition = xPosition;
  this->yPosition = yPosition;
}
int* OnePieceBlock::getAbsolutePosition(int xPosition, int yPosition){
  int* positions = (int*) malloc (2*sizeof(int));
  positions[0] = this->absoluteXPosition(xPosition);
  positions[1] = this->absoluteYPosition(yPosition);
  return positions;
}

int OnePieceBlock::absoluteXPosition(int xPosition){
  return xPosition + (this->xPosition);
}

int OnePieceBlock::absoluteYPosition(int yPosition){
  return yPosition + (this->yPosition);
}

bool OnePieceBlock::canMove(int xPosition, int yPosition, int** board, int maxPosition, int distance, char XorY){
  int newY = this->absoluteYPosition(yPosition) + (XorY=='y'?distance:0);
  int newX = this->absoluteXPosition(xPosition) + (XorY=='x'?distance:0);
  return ((XorY=='x'?newX:newY)<maxPosition && !board[newX][newY]);
}
