/*

1365. How Many Numbers Are Smaller Than the Current Number

https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/description/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    int size = nums.size();
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (nums[i] > nums[j])
            {
                count++;
            }
        }
        v.push_back(count);
    }
    return v;
}

int main()
{
    return 0;
}