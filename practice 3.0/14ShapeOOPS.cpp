#include <iostream>
using namespace std;

// Base class
class Shape
{
public:
    string color;

    Shape(string c)
    {
        color = c;
    }

    virtual void area() = 0; // Pure virtual function

    void getColor()
    {
        cout << "Color: " << color << endl;
    }
};

// Derived class: Circle
class Circle : public Shape
{
public:
    int radius;

    Circle(int r, string c) : Shape(c)
    {
        radius = r;
    }

    void area() override
    {
        cout << "Circle Area: " << 3.14 * radius * radius << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape
{
public:
    int len, width;

    Rectangle(int l, int w, string c) : Shape(c)
    {
        len = l;
        width = w;
    }

    void area() override
    {
        cout << "Rectangle Area: " << len * width << endl;
    }
};

int main()
{
    Shape *s1 = new Circle(4, "Blue");
    Shape *s2 = new Rectangle(5, 3, "Red");

    s1->area();     // Calls Circle's area
    s1->getColor(); // Prints color

    s2->area();     // Calls Rectangle's area
    s2->getColor(); // Prints color

    delete s1;
    delete s2;

    return 0;
}
