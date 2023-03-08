/*

268. Missing Number
https://leetcode.com/problems/missing-number/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    unordered_map<int, int> mpp;

    for (int i = 0; i <= nums.size(); i++)
    {
        mpp[i] == 0;
    }

    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it : mpp)
    {
        if (it.second == 0)
            return it.first;
    }
    return 0;
}

int main()
{

    return 0;
}