/*

35. Search Insert Position
https://leetcode.com/problems/search-insert-position/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int getIndex(vector<int> nums, int low, int high, int target)
{
    int mid = (low + high) / 2;

    if (nums[mid] == target)
        return mid;
    else if (low == high)
        return mid;
    else if (target < nums[mid])
        return getIndex(nums, low, mid, target);
    else
        return getIndex(nums, mid + 1, high, target);

    return -1;
}

int searchInsert(vector<int> &nums, int target)
{
    if (target > nums[nums.size() - 1])
        return nums.size();

    return getIndex(nums, 0, nums.size(), target);
}

int main()
{
    return 0;
}