#include "OnePieceBlock.h"

class FourPieceBlock{
private:
  char yPosition;
  char xPosition;
protected:
  OnePieceBlock* pieces;
  FourPieceBlock(char xPosition, char yPosition);
};
