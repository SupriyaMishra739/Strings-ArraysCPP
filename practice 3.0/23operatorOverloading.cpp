#include <iostream>
using namespace std;

class Calculator
{
public:
    int value;

    // Constructor
    Calculator(int v = 0)
    {
        value = v;
    }

    // Function overloading: same name, different parameters
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }

    // Operator overloading: '+' to add values of two Calculator objects
    Calculator operator+(const Calculator &other)
    {
        return Calculator(this->value + other.value);
    }

    void display()
    {
        cout << "Value: " << value << endl;
    }
};

int main()
{
    Calculator c1(10), c2(20);

    // Function overloading
    Calculator c;
    cout << "add(int, int): " << c.add(2, 3) << endl;
    cout << "add(double, double): " << c.add(2.5, 3.5) << endl;

    // Operator overloading
    Calculator c3 = c1 + c2; // adds c1.value and c2.value
    c3.display();            // should print 30

    return 0;
}
