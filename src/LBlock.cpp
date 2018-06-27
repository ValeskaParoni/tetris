#include "../h/LBlock.h"

LBlock::LBlock(char xPosition, char yPosition)
:FourPieceBlock(xPosition, yPosition){
  this->pieces[0] = OnePieceBlock(0, -2);
  this->pieces[1] = OnePieceBlock(0, -1);
  this->pieces[2] = OnePieceBlock(0, 0);
  this->pieces[3] = OnePieceBlock(1, 0);
}
