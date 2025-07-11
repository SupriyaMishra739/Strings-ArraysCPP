#include <iostream>

using namespace std;
#include <unordered_set>

bool CheckStringCharsAreUnique(string word)
{

    unordered_set<char> unSet;

    for (int i = 0; i < word.length(); i++)
    {
        if (unSet.count(word[i]))
        {
            return false;
        }
        unSet.insert(word[i]);
    }
    return true;
}

int main()
{
    string word = "supriya";
    cout << CheckStringCharsAreUnique(word);
}