#include "OOP.h"

Character::Character() {
    this->hp = 0;
    this->x = 0;
    this->y = 0;
}
Character::Character(int hp, int x, int y) {
    this->hp = hp;
    this->x = x;
    this->y = y;
}

int Character::getHp() {
    return this->hp;
}

void Character::setHp(int hp) {
    this->hp = hp;
}

int Character::getX() {
    return this->x;
}

void Character::setX(int x) {
    this->x = x;
}

int Character::getY() {
    return this->y;
}

void Character::setY(int y) {
    this->y = y;
}

int Character::getManhattanDistTo(Character* other) {
    // STUDENT ANSWER
    return abs(this->x - other->x) + abs(this->y - other->y);
}

class Point
{
private:
    double x, y;
public:
    Point() {
        this->x = 0;
        this->y = 0;
    }
    Point(double x, double y) {
        this->x = x;
        this->y = y;
    }
    void setX(double x) {
        this->x = x;
    }
    double getX() {
        return this->x;
    }
    void setY(double y) {
        this->y = y;
    }
    double getY() {
        return this->y;
    }
    double distanceToPoint(const Point& pointA)
    {
        Point A = const_cast<Point&>(pointA);
        double X = (this->x - A.getX());
        double Y = (this->y - A.getY());
        return sqrt(X * X + Y * Y);
    }
};

class Circle
{
private:
    Point center;
    double radius;

public:
    Circle()
    {
        this->center = Point();
        this->radius = 0;
    }

    Circle(Point center, double radius)
    {
        this->center = center;
        this->radius = radius;
    }

    Circle(const Circle& circle)
    {
        *this = circle;
    }

    void setCenter(Point point)
    {
        this->center = point;
    }

    void setRadius(double radius)
    {
        this->radius = radius;
    }

    Point getCenter() const
    {
        return this->center;
    }

    double getRadius() const
    {
        return this->radius;
    }

    void printCircle()
    {
        printf("Center: {%.2f, %.2f} and Radius %.2f\n", this->center.getX(), this->center.getY(), this->radius);
    }
};