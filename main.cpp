#include <iostream>
#include "chess.h"

int main() {
    std::array<int, 2> pawnPosition = {2, 1}; 
    bool isWhitePawn = true;
    Pawn pawn(pawnPosition, isWhitePawn);
    
    std::cout << pawn.get_moves()[1][1];
    return 0;
}
