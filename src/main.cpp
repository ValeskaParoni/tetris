#include "../h/TetrisGame.h"

int main(int argc, char **argv){
  TetrisGame game = TetrisGame(30, 10);
  game.run();
  return 0;
}
