#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
#include <unordered_set>
#include <vector>

int MissingNumFrom1ToN(vector<int> v) // 1 1 2 3 4  5
{
    unordered_set<char> unSet;

    for (char ch : word)
    {
        unSet.insert(ch);
    }
    string res = "";
    for (int i = 0; i < word.length(); i++)
    {
        if (unSet.count(word[i]))
        {
            res = res + word[i];
            unSet.erase(word[i]);
        }
    }
    cout << res;
}
main()
{
    string s = "helloooo";
    RemoveDuplicate(s);
}