#include <iostream>
using namespace std;
#include <unordered_map>
#include <string>
// String compression (e.g., "aaabbc" → "a3b2c1")  ✅

string compressString(string word)
{
    unordered_map<char, int> unMap;
    string res = "";

    for (char ch : word)
    {
        unMap[ch]++;
    } //{a:3 , b:2, c:1}

    for (char ch : word)
    {
        if (unMap[ch])
        {
            res = res + ch;
            res = res + to_string(unMap[ch]);
            unMap.erase(ch);
        }
    }
    return res;
}

int main()
{
    string word = "aaabbc";
    cout << compressString(word);
}