/*

34. Find First and Last Position of Element in Sorted Array
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
Status - UnSubmitted -> WRONG ANSWER

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> v;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            v.push_back(i);
        }
    }
    if (v.size() != 0)
        return v;

    v.push_back(-1);
    v.push_back(-1);

    return v;
}

int main()
{

    return 0;
}