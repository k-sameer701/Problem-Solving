/*

1913. Maximum Product Difference Between Two Pairs
https://leetcode.com/problems/maximum-product-difference-between-two-pairs/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int maxProductDifference(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    int last = nums.size() - 1;
    int first_Maximum_Number = nums[last];
    int second_Maximum_Number = nums[last - 1];
    int first_Minimum_Number = nums[0];
    int second_Minimum_Number = nums[1];

    int ans = first_Maximum_Number * second_Maximum_Number - first_Minimum_Number * second_Minimum_Number;

    return ans;
}

int main()
{

    return 0;
}