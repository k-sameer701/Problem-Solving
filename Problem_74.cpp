/*

215. Kth Largest Element in an Array
https://leetcode.com/problems/kth-largest-element-in-an-array/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] >= k)
            count++;
    }
    return count;
}

int main()
{

    return 0;
}