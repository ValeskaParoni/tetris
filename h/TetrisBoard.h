class TetrisBoard{
  friend class TetrisGame;
private:
  int rows;
  int columns;
  char** surface;
  TetrisBoard(int rows, int columns);
public:
  void print();
};
