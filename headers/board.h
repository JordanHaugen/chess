#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"
#include <vector>

class Board {
private:
    std::vector<std::vector<Piece>> squares;

public:
    Board() {
        squares.resize(8, std::vector<Piece>(8, Piece()));

        squares[0][0] = Piece(Type::ROOK, Color::WHITE);
        squares[0][1] = Piece(Type::KNIGHT, Color::WHITE);
        squares[0][6] = Piece(Type::KNIGHT, Color::WHITE);
        squares[0][7] = Piece(Type::ROOK, Color::WHITE);
        squares[7][0] = Piece(Type::ROOK, Color::BLACK);
        squares[7][1] = Piece(Type::KNIGHT, Color::BLACK);
        squares[7][6] = Piece(Type::KNIGHT, Color::BLACK);
        squares[7][7] = Piece(Type::ROOK, Color::BLACK);
    }

    void display() const {
        for (const auto &row : squares) {
            for (const auto &piece : row) {
                std::cout << piece.symbol() << " ";
            }
            std::cout << std::endl;
        }
    }
};

#endif
