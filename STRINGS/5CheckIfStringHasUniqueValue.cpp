// Check if a string has all unique characters (without using extra space if possible).
// 🔹 Input : "abcdef" → True
// 🔹 Input : "apple" → False

#include <iostream>
using namespace std;
#include <map>

bool checkUniqueChars(string &word)
{
    map<char, int> m;

    for (char ch : word)
    {
        m[ch]++;
    }

    for (char c : word)
    {
        if (m[c] != 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string word = "abcdeff";
    if (checkUniqueChars(word))
    {
        cout << "YES!!!";
    }
    else
        cout << "FALSE!!";
}