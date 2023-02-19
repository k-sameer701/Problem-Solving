/*

704. Binary Search
https://leetcode.com/problems/binary-search/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int search(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size();
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] == target)
            return mid;
        else if (target > nums[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main()
{

    return 0;
}