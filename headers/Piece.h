#ifndef PIECE_H
#define PIECE_H

#include <iostream>

enum class Color { WHITE, BLACK};
enum class Type { PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING, EMPTY};

class Piece {
    public:
        Color color;
        Type type;

        Piece(Type type = Type::EMPTY, Color color = Color::WHITE) : type(type), color(color) {}
    char symbol() const {
        switch (type) {
            case Type::PAWN:   return 'P';
            case Type::KNIGHT: return 'N';
            case Type::BISHOP: return 'B';
            case Type::ROOK:   return 'R';
            case Type::QUEEN:  return 'Q';
            case Type::KING:   return 'K';
            case Type::EMPTY:  return '.';
            default:           return '?';
        }
    }
};

#endif