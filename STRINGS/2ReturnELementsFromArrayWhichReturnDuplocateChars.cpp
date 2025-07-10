// C++ program that returns all the strings from an array which contain any duplicate character:

#include <iostream>
#include <vector>
using namespace std;
#include <unordered_set>

bool isDuplicate(string &word)
{
    unordered_set<char> unSet;

    for (char ch : word)
    {
        if (unSet.count(ch) > 0)
        {
            return true;
        }
        unSet.insert(ch);
    }
    return false;
}

int main()
{
    vector<string> words = {"apple", "mango", "hello", "supriya", "mmy"};

    for (string word : words)
    {
        if (isDuplicate(word))
        {
            cout << word << endl;
        }
    }
}