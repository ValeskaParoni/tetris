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
  return this->canMove(board, rows, 1, 'x');
}

bool FourPieceBlock::canMove(int** board, int maxPosition, int distance, char XorY){
  for (int i = 0; i < 4; i++){
    if (!(this->pieces[i].canMove(this->xPosition, this->yPosition, board, maxPosition, distance, XorY))){
      return false;
    }
  }
  return true;
}

void FourPieceBlock::goDown(int** board, int rows){
  this->move(board, rows, 1, 'x');
}

void FourPieceBlock::goLeft(int** board, int columns){
  this->move(board, columns, -1, 'y');
}

void FourPieceBlock::goRight(int** board, int columns){
  this->move(board, columns, 1, 'y');
}

void FourPieceBlock::move(int** board, int maxPosition, int distance, char XorY){
  //down: maxPosition = numer of rows, distance = +1, XorY = x
  //left: maxPosition = numer of columns, distance = +1, XorY = y
  //right: maxPosition = numer of columns, distance = -1, XorY = y
  if (this->canMove(board, maxPosition, distance, XorY)){
    if (XorY=='x'){
      this->xPosition = this->xPosition + distance;
    }
    else if (XorY=='y'){
      this->yPosition = this->yPosition + distance;
    }
  }
}
