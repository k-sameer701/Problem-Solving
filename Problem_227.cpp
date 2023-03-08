/*

34. Find First and Last Position of Element in Sorted Array
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> searchRange(vector<int> &nums, int target)
{
    vector<int> v;
    int first = -1, last = -1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == target)
        {
            first = i;
            break;
        }
    }
    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] == target)
        {
            last = i;
            break;
        }
    }
    v.push_back(first);
    v.push_back(last);
    return v;
}

int main()
{

    return 0;
}