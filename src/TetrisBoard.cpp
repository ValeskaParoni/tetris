#include <iostream>
#include "../h/TetrisBoard.h"

TetrisBoard::TetrisBoard(int rows, int columns){
  this->fixedSurface = (int**) malloc(rows*sizeof(int*));
  for (int i = 0; i < rows; i++){
    this->rows = rows;
    this->columns = columns;
    this->fixedSurface[i] = (int*) calloc(columns, sizeof(int));
  }
}
void TetrisBoard::print(int** surface){
  for (int row = 0; row < this->rows; row++){
    for (int column = 0; column < this->columns; column++){
      std::cout << surface[row][column] << " ";
    }
    std::cout << "\n";
  }
}
void TetrisBoard::printFixedSurface(){
  this->print(this->fixedSurface);
}
void TetrisBoard::printSuperiorSurface(){
  this->print(this->superiorSurface);
}
void TetrisBoard::createSuperiorSurface(FourPieceBlock* block){
  this->superiorSurface = this->updateSurface(this->copyFixedSurface(), block);
}

int** TetrisBoard::copyFixedSurface(){
  int** surface = (int**) malloc(rows*sizeof(int*));
  for (int i = 0; i < this->rows; i++){
    surface[i] = (int*) malloc (sizeof(int)*this->columns);
    memcpy(surface[i], this->fixedSurface[i], sizeof(int)*this->columns);
  }
  return surface;
}

int** TetrisBoard::updateSurface(int** surface, FourPieceBlock* block){
  int** blockPositions = block->getBlockPositions();
  for (int i = 0; i < 4; i++){
    surface[blockPositions[i][0]][blockPositions[i][1]] = 1;
  }
  return surface;
}

void TetrisBoard::updateFixedSurface(FourPieceBlock* block){
  updateSurface(this->fixedSurface, block);
}
