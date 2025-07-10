#include <iostream>
using namespace std;

string StringCompression(string &word)
{
    int count = 1;
    string res;

    for (int i = 1; i < word.length(); i++)
    {
        if (word[i] == word[i - 1])
        {
            count++;
        }
        else
        {
            res = res + word[i - 1];
            res = res + to_string(count);
            count = 1;
        }
    }
    res = res + word.back(); // add the last char

    res = res + to_string(count);

    return res;
}

int main()
{
    string s = "aabbbaa";
    cout << StringCompression(s);
}