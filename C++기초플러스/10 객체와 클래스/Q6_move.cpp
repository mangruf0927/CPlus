#include <iostream>
#include "Q6_move.h"

Move::Move(double a, double b)
{
    x = a;
    y = b;
}

void Move::ShowMove() const
{
    std::cout << "x = " << x << ", y = " << y << std::endl;
}

Move Move::Add(const Move & m) const
{
    Move move;
    move.x = x + m.x;
    move.y = y + m.y;
    return move;

    // return Move(x + m.x, y + m.y);
}

void Move::Reset(double a, double b)
{
    x = a;
    y = b;
}
