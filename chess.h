#ifndef CHESS_H
#define CHESS_H
#include <iostream>
#include <vector>
#include <array>

class Piece
{
protected:
    std::array<int, 2> position_;
    bool white_;
    int value_;
    std::vector<std::vector<int>> moves_;

public:
    Piece(std::array<int, 2> position, bool white, int value, std::vector<std::vector<int>> moves);
    std::array<int, 2> get_position();
    bool get_white();
    std::vector<std::vector<int>> get_moves();
    void set_position(std::array<int, 2> position);
};

class Board
{
private:
    Piece *chessboard[8][8]; // Store pointers to Piece objects
public:
    Board();
    ~Board();
};

class Pawn : public Piece
{
public:
    Pawn(std::array<int, 2> position, bool white)
        : Piece(position, white, 1, {{0, 1}, {0, 2}}) {}
};

class Rook : public Piece
{
public:
    Rook(std::array<int, 2> &position, bool white)
        : Piece(position, white, 5, {{1, 0}, {-1, 0}, {0, 1}, {0, -1}}) {}
};

class Knight : public Piece
{
public:
    Knight(std::array<int, 2> &position, bool white)
        : Piece(position, white, 3,
                {{2, 1},
                 {2, -1},
                 {-2, 1},
                 {-2, -1},
                 {1, 2},
                 {1, -2},
                 {-1, 2},
                 {-1, -2}}) {}
};

class Bishop : public Piece
{
public:
    Bishop(std::array<int, 2> &position, bool white)
        : Piece(position, white, 3, {{1, 1}, {1, -1}, {-1, 1}, {-1, -1}}) {}
};

class Queen : public Piece
{
public:
    Queen(std::array<int, 2> &position, bool white)
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

class King : public Piece
{
public:
    King(std::array<int, 2> &position, bool white)
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