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
class Book
{
private:
    char* title;
    char* authors;
    int publishingYear;

public:
    Book()
    {
        this->title = nullptr;
        this->authors = nullptr;
        this->publishingYear = 0;
    }

    Book(const char* title, const char* authors, int publishingYear)
    {
        this->title = const_cast<char*>(title);
        this->authors = const_cast<char*>(authors);
        this->publishingYear = publishingYear;
    }

    Book(const Book& book)
    {
        *this = const_cast<Book&>(book);
    }

    void setTitle(const char* title)
    {
        this->title = const_cast<char*>(title);
    }

    void setAuthors(const char* authors)
    {
        this->authors = const_cast<char*>(authors);
    }

    void setPublishingYear(int publishingYear)
    {
        this->publishingYear = publishingYear;
    }

    char* getTitle() const
    {
        return this->title;
    }

    char* getAuthors() const
    {
        return this->authors;
    }

    int getPublishingYear() const
    {
        return this->publishingYear;
    }

    ~Book()
    {

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
        this->color = color;
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
        this->size = size;
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
        for (int i = 0; i < 5; i++) {
            this->toyBox[i] = nullptr;
        }
        this->numberOfItems = 0;
    }

    int addItem(const CarToy& carToy)
    {
        /*
         * STUDENT ANSWER
         * TODO: function add a new Car toy to the box.
                 If successfully added, the function returns the current number of toys in the box.
                 If the box is full, return -1.
         */
        for (int i = 0; i < 5; i++) {
            if (this->toyBox[i] == nullptr) {
                this->toyBox[i] = new CarToy(carToy);
                this->numberOfItems++;
                return this->numberOfItems;
            }
        }
        return -1;
    }

    int addItem(const PuzzleToy& puzzleToy)
    {
        /*
         * STUDENT ANSWER
         * TODO: function add a new Puzzle toy to the box.
                 If successfully added, the function returns the current number of toys in the box.
                 If the box is full, return -1.
         */
        for (int i = 0; i < 5; i++) {
            if (this->toyBox[i] == nullptr) {
                this->toyBox[i] = new PuzzleToy(puzzleToy);
                this->numberOfItems++;
                return this->numberOfItems;
            }
        }
        return -1;
    }

    void printBox()
    {
        for (int i = 0; i < numberOfItems; i++)
            toyBox[i]->printType();
    }
};