#include "OOP.h"


Character::Character(int hp, int x, int y) {
    // STUDENT ANSWER
}

int Character::getHp() {
    // STUDENT ANSWER
}

void Character::setHp(int hp) {
    // STUDENT ANSWER
}

int Character::getX() {
    // STUDENT ANSWER
}

void Character::setX(int x) {
    // STUDENT ANSWER
}

int Character::getY() {
    // STUDENT ANSWER
}

void Character::setY(int y) {
    // STUDENT ANSWER
}

int Character::getManhattanDistTo(Character* other) {
    // STUDENT ANSWER
}

class Point
{
    /*
     * STUDENT ANSWER
     * TODO: using code template in previous question
     */
};

class Circle
{
private:
    Point center;
    double radius;

public:
    Circle()
    {
        /*
         * STUDENT ANSWER
         * TODO: set zero center's x-y and radius
         */
    }

    Circle(Point center, double radius)
    {
        /*
         * STUDENT ANSWER
         */
    }

    Circle(const Circle& circle)
    {
        /*
         * STUDENT ANSWER
         */
    }

    void setCenter(Point point)
    {
        /*
         * STUDENT ANSWER
         */
    }

    void setRadius(double radius)
    {
        /*
         * STUDENT ANSWER
         */
    }

    Point getCenter() const
    {
        /*
         * STUDENT ANSWER
         */
    }

    double getRadius() const
    {
        /*
         * STUDENT ANSWER
         */
    }

    void printCircle()
    {
        printf("Center: {%.2f, %.2f} and Radius %.2f\n", this->center.getX(), this->center.getY(), this->radius);
    }
};

class Book
{
private:
    char* title;
    char* authors;
    int publishingYear;

public:
    Book()
    {
        /*
         * STUDENT ANSWER
         * TODO: set zero publishingYear and null pointer
         */
    }

    Book(const char* title, const char* authors, int publishingYear)
    {
        /*
         * STUDENT ANSWER
         */
    }

    Book(const Book& book)
    {
        /*
         * STUDENT ANSWER
         * TODO: deep copy constructor
         */
    }

    void setTitle(const char* title)
    {
        /*
         * STUDENT ANSWER
         */
    }

    void setAuthors(const char* authors)
    {
        /*
         * STUDENT ANSWER
         */
    }

    void setPublishingYear(int publishingYear)
    {
        /*
         * STUDENT ANSWER
         */
    }

    char* getTitle() const
    {
        /*
         * STUDENT ANSWER
         */
    }

    char* getAuthors() const
    {
        /*
         * STUDENT ANSWER
         */
    }

    int getPublishingYear() const
    {
        /*
         * STUDENT ANSWER
         */
    }

    ~Book()
    {
        /*
         * STUDENT ANSWER
         */
    }

    void printBook() {
        printf("%s\n%s\n%d", this->title, this->authors, this->publishingYear);
    }
};
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

class Toy
{
protected:
    double price;

public:
    Toy(double price)
    {
        this->price = price;
    }

    virtual void printType() = 0;
    friend class ToyBox;
};

class CarToy : public Toy
{
private:
    Color color;

public:
    CarToy(double price, Color color) : Toy(price)
    {
        /*
         * STUDENT ANSWER
         */
    }

    void printType()
    {
        cout << "This is a car toy\n";
    }

    friend class ToyBox;
};

class PuzzleToy : public Toy
{
private:
    Size size;

public:
    PuzzleToy(double price, Size size) : Toy(price)
    {
        /*
         * STUDENT ANSWER
         */
    }

    void printType()
    {
        cout << "This is a puzzle toy\n";
    }

    friend class ToyBox;
};

class ToyBox
{
private:
    Toy* toyBox[5];
    int numberOfItems;

public:
    ToyBox()
    {
        /*
         * STUDENT ANSWER
         * TODO: set zero numberOfItems and nullptr toyBox
         */
    }

    int addItem(const CarToy& carToy)
    {
        /*
         * STUDENT ANSWER
         * TODO: function add a new Car toy to the box.
                 If successfully added, the function returns the current number of toys in the box.
                 If the box is full, return -1.
         */
    }

    int addItem(const PuzzleToy& puzzleToy)
    {
        /*
         * STUDENT ANSWER
         * TODO: function add a new Puzzle toy to the box.
                 If successfully added, the function returns the current number of toys in the box.
                 If the box is full, return -1.
         */
    }

    void printBox()
    {
        for (int i = 0; i < numberOfItems; i++)
            toyBox[i]->printType();
    }
};