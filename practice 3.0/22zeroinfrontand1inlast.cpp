#include <iostream>
using namespace std;
#include <vector>

int main()
{
    vector<int> v = {0, 1, 0, 1, 0, 1, 0, 0};

    int zero = 0;
    int one = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
        {
            zero++;
        }
        else
            one++;
    }

    // Overwrite with 0s and then 1s
    for (int i = 0; i < zero; i++)
        v[i] = 0;

    for (int i = zero; i < v.size(); i++)
        v[i] = 1;

    for (int i : v)
    {
        cout << i << " ";
    }
}