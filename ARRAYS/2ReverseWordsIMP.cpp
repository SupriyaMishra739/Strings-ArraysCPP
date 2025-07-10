// Reverse Words
// Given a string s, reverse the string without reversing its individual words. Words are separated by spaces.

// Input : s = " i like this program very much " Output : "much very program this like i" Explanation : After removing extra spaces and reversing the whole string(not individual words), the input string becomes "much very program this like i".

// Input : s = " a " Output : "a" Explanation : The input string contains only one word with extra spaces around it.After removing the extra spaces, the output is "a".Constraints:

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

string Reversestring(string &s)
{
    istringstream iss(s); // wraps the string in a object--> so that we can read them one at a time using >> operator
    vector<string> v;
    string word;

    while (iss >> word)
    {
        v.push_back(word);
    }

    reverse(v.begin(), v.end()); // reverse the vector of strings

    string res;

    for (int i = 0; i < v.size(); i++)
    {
        res = res + v[i];
        if (i != v.size() - 1)
        {
            res = res + " ";
        }
    }

    return res;
}

int main()
{
    string s = "i like this program very much";
    cout << Reversestring(s);
}