#pragma once
#include <iostream>
using namespace std;
class Character {
protected:
    int hp;
    int x;
    int y;
public:
    // Constructor: set the values of x and y and hp to 0
    Character();

    // Constructor: set the values of hp, x and y to each parameter
    Character(int hp, int x, int y);

    // Set and get hp
    int getHp();
    void setHp(int hp);

    // Set and get x
    int getX();
    void setX(int x);

    // Set and get y
    int getY();
    void setY(int y);

    // Get Manhattan distance to other character
    int getManhattanDistTo(Character* other);
};

class Point;
class Circle;
class Book;
enum Color
{
    red,
    green,
    blue
};
enum Size
{
    small,
    medium,
    big
};
class Toy;
class CarToy;