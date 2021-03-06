#ifndef BOARD_H
#define BOARD_H

#include <assert.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#include "pieces.h"

struct Board {
    char squares[8][8];
};

struct Coordinate {
    int r, c;
};

void clear(struct Board*);

struct Coordinate algebraic_to_coordinate(char*);

char place_piece(char, char*, struct Board*);

void initialize_board(struct Board*);

#endif // BOARD_H
