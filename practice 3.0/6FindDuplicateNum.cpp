#include <iostream>
using namespace std;
#include <vector>
#include <unordered_set>
// You are given an array of integers nums containing n + 1 integers where each integer is in the range[1, n] inclusive.
// There is only one repeated number in nums,
//     but it could be repeated more than once.

// Input : nums = [ 1, 3, 4, 2, 2 ] Output : 2

int returnDuplicate(vector<int> v)
{
    unordered_set<int> unSet;

    for (int i : v)
    {
        if (unSet.count(i))
        {
            return i;
        }

        unSet.insert(i);
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 3, 4, 2};
    cout << returnDuplicate(v);
}