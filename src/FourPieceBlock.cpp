#include "../h/FourPieceBlock.h"
#include <iostream>

FourPieceBlock::FourPieceBlock(char xPosition, char yPosition){
  this->pieces = (OnePieceBlock*) calloc(4, sizeof(OnePieceBlock));
  this->xPosition = xPosition;
  this->yPosition = yPosition;
}
