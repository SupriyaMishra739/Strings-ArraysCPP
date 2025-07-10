// Write a C++ program that takes two integers from the user and divides them.

// If the second number(denominator)
// is zero, use throw to raise an exception, and catch it using a catch block to show an error message like :

//     arduino Copy Edit "Error: Cannot divide by zero." Otherwise,
//     display the division result.

#include <iostream>
using namespace std;

float Divide(int &n, int &m)
{
    if (m == 0)
    {
        throw "Error: Cannot divide by zero.";
    }

    return (float)n / m;
}

int main()
{
    int a, b;
    try
    {
        cout << "Enter numerator: ";

        cin >> a;

        cout << "Enter denominator: ";
        cin >> b;
        if (a < 0 || b < 0)
        {
            throw "a and b cannot be negative";
        }
    }
    catch (const char *e)
    {
        cout << e << endl;
        return 0;
    }

    try
    {
        float result = Divide(a, b);
        cout << "Result: " << result << endl;
    }
    catch (const char *e)
    {
        cout << e << endl;
    }

    return 0;
}
