/*

215. Kth Largest Element in an Array
https://leetcode.com/problems/kth-largest-element-in-an-array/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());

    return nums.at(nums.size() - k);
}

int main()
{

    return 0;
}