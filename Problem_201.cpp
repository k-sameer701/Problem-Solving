/*
2006. Count Number of Pairs With Absolute Difference K
https://leetcode.com/problems/count-number-of-pairs-with-absolute-difference-k/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int countKDifference(vector<int> &nums, int k)
{
    int size = nums.size();
    int count = 0, check1 = k, check2 = (-1) * k;

    // vector<int> v;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if ((nums[i] - nums[j]) == check1 || (nums[i] - nums[j]) == check2)
                count++;
        }
    }
    return count;
}

int main()
{

    return 0;
}