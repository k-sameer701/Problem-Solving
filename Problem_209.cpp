/*

217. Contains Duplicate
https://leetcode.com/problems/contains-duplicate/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second > 1)
            return true;
    }
    return false;
}

int main()
{

    return 0;
}