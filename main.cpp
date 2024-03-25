#include "headers/Board.h"
#include <iostream>
#include <string>

int main() {
    Board board;
    std::string from, to;
    bool gameRunning = true;

    while (gameRunning) {
        board.display();

        // Get the move from the current player
        std::cout << "Enter your move (e.g., e2 e4) or 'quit' to exit: ";
        std::cin >> from;
        if (from == "quit") { 
            gameRunning = false;
            break;
        }
        std::cin >> to;

        board.movePiece(from, to);
    }

    std::cout << "Game ended." << std::endl;
    return 0;
}
