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

bool OnePieceBlock::canGoDown(int xPosition, int yPosition, int** board, int rows){
  int newY = this->absoluteYPosition(yPosition);
  int x = this->absoluteXPosition(xPosition)+1;
  return (x<rows && !(board[x][newY]));
}
