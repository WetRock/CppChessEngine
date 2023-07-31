#include <iostream>

#include "chess.h"
using namespace std;

int main() {
    int pawnPosition[2] = {2, 1}; 
    bool isWhitePawn = true;
    Pawn pawn(pawnPosition, isWhitePawn);
    return 0;
}