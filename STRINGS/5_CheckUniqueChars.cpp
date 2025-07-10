// Check if a string has all unique characters (without using extra space if possible).
// 🔹 Input : "abcdef" → True
// 🔹 Input : "apple" → False
#include <iostream>
using namespace std;

bool checkUniqueChars(string &word)
{
    bool arr[256] = {false};

    for (char ch : word)
    {
        if (arr[(int)ch] == true)
        {
            return false;
        }
        arr[(int)ch] = true;
    }
    return true;
}

int main()
{
    string word = "abcdef";

    if (checkUniqueChars(word))
    {
        cout << "YES!!!" << endl;
    }
    else
    {
        cout << "FALSE!!" << endl;
    }

    return 0;
}
