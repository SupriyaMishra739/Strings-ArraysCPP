// pair with given diff-->it uses  2 sum concept

#include <iostream>
using namespace std;
#include <vector>
vector<int> PairWithGivenDiff(vector<int> v, int diff)
{
    vector<int> res;
    int i = 0;
    int j = 1;

    while (j < v.size())
    {
        if (v[j] - v[i] == diff)
        {
            return {i, j};
        }
        else if (v[j] - v[i] > diff)
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return {-1};
}

int main()
{
    vector<int> v = {2, 3, 5, 10, 50, 80};
    vector<int> res = PairWithGivenDiff(v, 45);
    for (int i : res)
    {
        cout << i << " ";
    }
}
