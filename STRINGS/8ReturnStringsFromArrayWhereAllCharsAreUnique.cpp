// Return strings from an array where all characters are unique (no duplicates).
// 🔹 Input : [ "apple", "ball", "cat", "dog" ] → Output : [ "cat", "dog" ]

#include <iostream>
using namespace std;
#include <unordered_set>

bool ReturnStringWhichAreUnique(string &word)
{
    unordered_set<char> unSet;

    for (char ch : word)
    {
        if (unSet.count(ch))
        { // if already seen the character in the string then return false
            return false;
        }
        unSet.insert(ch); // if  seeing the character for 1st time then insert the cahracter
    }
    return true;
}

int main()
{
    string arr[] = {"apple", "ball", "cat", "dog"};

    for (string word : arr)
    {
        if (ReturnStringWhichAreUnique(word))
        {
            cout << word << " ";
        }
    }
    return 0;
}