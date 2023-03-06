/*

540. Single Element in a Sorted Array
https://leetcode.com/problems/single-element-in-a-sorted-array/
Status - Submitted

*/

#include <bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second == 1)
            return it->first;
    }

    return -1;
}

int main()
{

    return 0;
}