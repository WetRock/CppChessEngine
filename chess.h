#ifndef CHESS_H
#define CHESS_H
#include <iostream>
#include <vector>
#include <array>

class Piece {
 protected:
  std::array<int, 2> position_;
  bool white_;
  int value_;
  std::vector<std::vector<int>> moves_;

 public:
  Piece(std::array<int, 2> &stocks, bool white, int value, std::vector<std::vector<int>> moves);
  int get_position();
  bool get_white();
  std::vector<std::vector<int>> get_moves();
  void set_position(int position[2]);
};

class board {
 private:
  Piece* chessboard[8][8];  // Store pointers to Piece objects
 public:
  board();
  ~board();
};

class Pawn : public Piece {
 public:
  Pawn(int *position, bool white)
      : Piece(position, white, 1, {{0, 1}, {0, 2}}) {}
};

class Rook : public Piece {
 public:
  Rook(int *position, bool white)
      : Piece(position, white, 5, {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}) {}
};

class Knight : public Piece {
 public:
  Knight(int *position, bool white)
      : Piece(position, white, 3,
              {{2, 1},
               {2, -1},
               {-2, 1},
               {-2, -1},
               {1, 2},
               {1, -2},s
               {-1, 2},
               {-1, -2}}) {}
};

class Bishop : public Piece {
 public:
  Bishop(int *position, bool white)
      : Piece(position, white, 3, {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}}) {}
};

class Queen : public Piece {
 public:
  Queen(int position[2], bool white)
      : Piece(position, white, 9,
              {{1, 0},
               {-1, 0},
               {0, 1},
               {0, -1},
               {1, 1},
               {1, -1},
               {-1, 1},
               {-1, -1}}) {}
};

class King : public Piece {
 public:
  King(int *position, bool white)
      : Piece(position, white, 100,
              {{1, 0},
               {-1, 0},
               {0, 1},
               {0, -1},
               {1, 1},
               {1, -1},
               {-1, 1},
               {-1, -1}}) {}
};

#endif