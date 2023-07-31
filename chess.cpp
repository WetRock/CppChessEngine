#include "chess.h"
#include <iostream>
using namespace std;


Piece::Piece(std::array<int, 2> position, bool white, int value, std::vector<std::vector<int>> moves)
:position_(position), moves_(moves), value_(value), white_(white)
{
 
}

std::array<int, 2> Piece::get_position() {
  return position_;
}

bool Piece::get_white() {
  return white_;
}

std::vector<std::vector<int>> Piece::get_moves() {
  return moves_;
}

void Piece::set_position(std::array<int, 2> position) {
  position_ = position;
}

Board::Board() {
  for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j) {
      chessboard[i][j] = nullptr;
    }
  }
}

Board::~Board()
{
}