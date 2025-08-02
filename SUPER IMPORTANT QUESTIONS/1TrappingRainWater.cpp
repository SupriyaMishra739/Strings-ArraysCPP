// 💧 Trapping Rain Water – Problem Statement(in simple words)
// You are given an array of integers where each element represents the height of a building(or bar) in a histogram.

// After it rains,
// water gets trapped between the buildings where there are dips.Your task is to calculate how much water will be trapped between these buildings.

// 📥Input : An array height[] of size n, where each element is a non - negative integer.

// Each element represents the height of a vertical bar at that position.

// 📤 Output : An integer representing the total units of water that can be trapped between the bars.

#include <iostream>
using namespace std;
#include <vector>

int TrappingRainWater(vector<int> h)
{
    int n = h.size();
    vector<int> leftMax(n);
    vector<int> rightMax(n);

    int leftMax[0] = 0;
    for (int i = 1; i < h.size(); i++)
    {
        leftMax[i] = max(leftMax[i - 1], h[i - 1]);
    }

    int RightMax[h.size() - 1] = h[n - 1];
    for (int i = h.size() - 2; i >= 0; i--)
    {
        rightMax[i] = max(rightMax[i + 1], h[i + 1]);
    }
    int water = 0;
    for (int i = 0; i < h.size(); i++)
    {
        int minHeight = min(leftMax[i], rightMax[i]);
        int temp = minHeight - h[i];
        if (temp > 0)
        {
            water = water + temp;
        }
    }
    return water;
}

int main()
{

    vector<int> height = {4, 2, 0, 5, 2, 6, 2, 3};
    cout << TrappingRainWater(h);
}