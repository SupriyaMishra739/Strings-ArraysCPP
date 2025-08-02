#include <iostream>
using namespace std;

int calStringLen(const string &str)
{
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}

int main()
{
    string str = "abs";
    cout << calStringLen(str); // Output: 3
}
