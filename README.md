# C++ Chess

Welcome to C++ Chess! This project is a simple implementation of the classic game of chess, written in C++. It allows two players to play chess on the same computer, taking turns to input their moves.

## Installation

To run this game, you'll need a C++ compiler that supports C++11 or later. Most modern C++ compilers should suffice.

## Compiling the Game

1. Clone or download this repository to your local machine.
2. Open a terminal and navigate to the project directory.
3. Compile the project using a C++ compiler. For example, if you're using `g++`, you can compile the game with the following command:

```sh
g++ -std=c++11 main.cpp -o chessGame
```

## Running the Game
After compilation, you can start the game by running the executable from your terminal:
```./chessgame```

## How to Play
The game follows standard chess rules and uses algebraic notation for moves. The board is displayed in a text-based format, with rows labeled A-H and columns labeled 1-8.

To make a move, enter the starting square of the piece you want to move followed by the target square. For example, to move a pawn from b2 to b4, enter:

```b2 b4```

## Board Layout
Here's a visual representation of the board with its coordinate system:

```
  A B C D E F G H
8 R N B Q K B N R 8
7 P P P P P P P P 7
6 . . . . . . . . 6
5 . . . . . . . . 5
4 . . . . . . . . 4
3 . . . . . . . . 3
2 P P P P P P P P 2
1 R N B Q K B N R 1
  A B C D E F G H
```
- P = Pawn
- N = Knight
- B = Bishop
- R = Rook
- Q = Queen
- K = King
- `.` represents an empty square