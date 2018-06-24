#include <iostream>
#include "../h/TetrisBoard.h"

TetrisBoard::TetrisBoard(int rows, int columns){
  this->surface = (char**) malloc(rows*sizeof(char*));
  for (int i = 0; i < rows; i++){
    this->rows = rows;
    this->columns = columns;
    this->surface[i] = (char*) calloc(columns, sizeof(char));
  }
}
void TetrisBoard::print(){
  for (int row = 0; row < this->rows; row++){
    for (int column = 0; column < this->columns; column++){
      std::cout << this->surface[row][column] + '0' << " ";
    }
    std::cout << "\n";
  }
}
