#include "../h/FourPieceBlock.h"
#include <iostream>

FourPieceBlock::FourPieceBlock(int xPosition, int yPosition){
  this->pieces = (OnePieceBlock*) calloc(4, sizeof(OnePieceBlock));
  this->xPosition = xPosition;
  this->yPosition = yPosition;
}

int** FourPieceBlock::getBlockPositions(){
  int** positions = (int**) malloc (sizeof(int*)*4);
  for (int i = 0; i < 4; i++){
    positions[i] = this->pieces[i].getAbsolutePosition(this->xPosition, this->yPosition);
  }
  return positions;
}

bool FourPieceBlock::canGoDown(int** board, int rows){
  for (int i = 0; i < 4; i++){
     if (!(this->pieces[i].canGoDown(this->xPosition, this->yPosition, board, rows))){
       return false;
     }
  }
  return true; //se chegou aqui, eh pq todos podem descer
}

void FourPieceBlock::goDown(int** board, int rows){
  if (this->canGoDown(board, rows)){
    this->xPosition = this->xPosition+1;
  }
}
