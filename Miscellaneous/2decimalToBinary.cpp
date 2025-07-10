// Write a program to convert decimal numbers to binary numbers using a for loop.

#include <iostream>
using namespace std;

#include <vector>
#include <math.h>

int DecimalToBinary(int decimal)
{

    int res = 0;
    int count = 0;
    for (int i = binary.size() - 1; i >= 0; i--)
    {
        int num = binary[i] - '0'; // convert the char to num

        if (num != 0 && num != 1)
        {
            cout << "invalid";
            return 0;
        }
        res = res + num * pow(2, count);
        count++;
    }
    return res;
}

int main()
{
    // 010
    int decimal;
    cout << "Enter decimal number: ";
    cin >> decimal;
    cout << BinaryToDecimal(binary);
}
