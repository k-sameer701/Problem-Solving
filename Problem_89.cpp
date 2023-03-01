/*

2089. Find Target Indices After Sorting Array
https://leetcode.com/problems/find-target-indices-after-sorting-array/solutions/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> targetIndices(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());
    int size = nums.size();
    vector<int> v;
    for (int i = 0; i < size; i++)
    {
        if (target == nums[i])
            v.push_back(i);
    }
    return v;
}

int main()
{

    return 0;
}