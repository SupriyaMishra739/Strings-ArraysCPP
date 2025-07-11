#include <iostream>
using namespace std;
#include <unordered_set>

string RemoveDuplicatesAndReturn1stOccurence(string word)
{

    unordered_set<char> unSet;
    for (char ch : word)
    {
        unSet.insert(ch);
    }
    string result = "";

    for (int i = 0; i < word.length(); i++)
    {
        if (unSet.count(word[i]))
        {
            result = result + word[i];
            unSet.erase(word[i]);
        }
    }

    return result;
}

int main()
{
    string word = "programming";
    cout << RemoveDuplicatesAndReturn1stOccurence(word);
}