/*

2176. Count Equal and Divisible Pairs in an Array
https://leetcode.com/problems/count-equal-and-divisible-pairs-in-an-array/description/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int> &nums, int k)
{

    int count = 0;

    for (int i = 0; i < nums.size() - 1; i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if ((nums[i] == nums[j]) && (i * j % k == 0))
                count++;
        }
    }
    return count;
}

int main()
{

    return 0;
}