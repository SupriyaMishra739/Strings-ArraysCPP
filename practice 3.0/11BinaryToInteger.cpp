#include <iostream>
using namespace std;

int main()
{
    auto number = 0b011;
    cout << number;
    cout << endl;
    auto octal = 011; // Octal 11 = 1×8 + 1 = 9
    cout << octal;    // prints: 9
    cout << endl;
    auto hex = 0xF;
    cout << hex;
    cout << endl;
    cout << endl;
    auto binaryy = 0b1010; // 10
    auto octala = 012;     // 10
    auto hexa = 0xA;       // 10

    cout << binaryy << " " << octala << " " << hexa;
    return 0;
}
