// 🔹 5. Login Authentication
// Problem: Ask for a username and password. If they don’t match the correct ones, throw an exception.

// ✅ Concepts: String comparison, login validation
// 🧠 Tip: Use string and throw "Invalid login".

#include <iostream>
using namespace std;

float Divide(int &n, int &m)
{
    if (m == 0)
    {
        throw "Error: Cannot divide by zero.";
    }

    return (float)n / m;
}

int main()
{
    string Originalpassword = "123", Originalusername = "sup123";
    string pass, user;

    cout << "enter the pass and username" << endl;

    try
    {
        cin >> pass >> user;
        if (pass != Originalpassword || user != Originalusername)
        {
            throw "mismatch pass or username";
                }
    }
    catch (const char *e)
    {
        cout << e << endl;
        return 0;
    }

    cout << "Your pass and user is:" << pass << " " << user << endl;
}
