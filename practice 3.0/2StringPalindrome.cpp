#include <iostream>
using namespace std;
#include <string>

// Write a function that checks whether a given string is a palindrome.

// A palindrome is a string that reads the same forward and backward, ignoring case and non - alphanumeric characters.

bool CheckPalindrome(string &word)
{
    int i = 0;
    int j = word.length() - 1;
    string orginal = word;

    while (i <= j)
    {
        // swap

        char temp = word[i];
        word[i] = word[j];
        word[j] = temp;
        i++;
        j--;
    }
    return orginal == word;
}
int main()
{
    string word = "sup";
    if (CheckPalindrome(word))
    {
        cout << "yes palindrome!!";
    }
    else
        cout << "not palindrome!!";
}