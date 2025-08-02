#include <iostream>
using namespace std;

#include <sstream>

bool checkPanagram(string sentence)
{
    for (char ch : sentence)
    {
        if (isalpha(ch) && (ch) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string sentence = "hello there is a problem";

    cout << checkPanagram(sentence);
}