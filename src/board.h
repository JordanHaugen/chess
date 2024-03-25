#ifndef BOARD_H
#define BOARD_H

#include "Piece.h"
#include <vector>

class Board {
private:
    std::vector<std::vector<Piece>> squares;

    std::pair<int, int> convertToCoord(const std::string& pos) const {
        int column = pos[0] - 'a';
        int row = '8' - pos[1];
        return {column, row};
    }

    bool isValidMove(const Piece& piece, const std::pair<int, int>& start, const std::pair<int, int>& end) const {
        return true;
    }

public:
    Board() {
        squares.resize(8, std::vector<Piece>(8, Piece()));

        squares[0][0] = Piece(Type::ROOK, Color::WHITE);
        squares[0][1] = Piece(Type::KNIGHT, Color::WHITE);
        squares[0][2] = Piece(Type::BISHOP, Color::WHITE);
        squares[0][3] = Piece(Type::QUEEN, Color::WHITE);
        squares[0][4] = Piece(Type::KING, Color::WHITE);
        squares[0][5] = Piece(Type::BISHOP, Color::WHITE);
        squares[0][6] = Piece(Type::KNIGHT, Color::WHITE);
        squares[0][7] = Piece(Type::ROOK, Color::WHITE);
        squares[1][0] = Piece(Type::PAWN, Color::WHITE);
        squares[1][1] = Piece(Type::PAWN, Color::WHITE);
        squares[1][2] = Piece(Type::PAWN, Color::WHITE);
        squares[1][3] = Piece(Type::PAWN, Color::WHITE);
        squares[1][4] = Piece(Type::PAWN, Color::WHITE);
        squares[1][5] = Piece(Type::PAWN, Color::WHITE);
        squares[1][6] = Piece(Type::PAWN, Color::WHITE);
        squares[1][7] = Piece(Type::PAWN, Color::WHITE);
        squares[6][0] = Piece(Type::PAWN, Color::BLACK);
        squares[6][1] = Piece(Type::PAWN, Color::BLACK);
        squares[6][2] = Piece(Type::PAWN, Color::BLACK);
        squares[6][3] = Piece(Type::PAWN, Color::BLACK);
        squares[6][4] = Piece(Type::PAWN, Color::BLACK);
        squares[6][5] = Piece(Type::PAWN, Color::BLACK);
        squares[6][6] = Piece(Type::PAWN, Color::BLACK);
        squares[6][7] = Piece(Type::PAWN, Color::BLACK);
        squares[7][0] = Piece(Type::ROOK, Color::BLACK);
        squares[7][1] = Piece(Type::KNIGHT, Color::BLACK);
        squares[7][2] = Piece(Type::BISHOP, Color::BLACK);
        squares[7][3] = Piece(Type::QUEEN, Color::BLACK);
        squares[7][4] = Piece(Type::KING, Color::BLACK);
        squares[7][5] = Piece(Type::BISHOP, Color::BLACK);
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

    void movePiece(const std::string& from, const std::string& to) {
        auto [fromX, fromY] = convertToCoord(from);
        auto [toX, toY] = convertToCoord(to);
        Piece& fromPiece = squares[fromY][fromX];
        Piece& toPiece = squares[toY][toX];

        if (isValidMove(fromPiece, {fromX, fromY}, {toX, toY})) {
            // Execute the move
            toPiece = fromPiece;
            fromPiece = Piece();
            std::cout << "Move executed from " << from << " to " << to << std::endl;
        } else {
            std::cout << "Invalid move from " << from << " to " << to << std::endl;
        }
    }
};

#endif
