/*

2529. Maximum Count of Positive Integer and Negative Integer
https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int maximumCount(vector<int> &nums)
{
    int positive_numbers = 0;
    int negative_numbers = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
            negative_numbers++;
        else if (nums[i] > 0)
            positive_numbers++;
    }
    int ans = max(negative_numbers, positive_numbers);
    return ans;
}

int main()
{

    return 0;
}