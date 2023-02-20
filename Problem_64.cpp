/*

2149. Rearrange Array Elements by Sign
https://leetcode.com/problems/rearrange-array-elements-by-sign/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    vector<int> positive;
    vector<int> negative;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] < 0)
            negative.emplace_back(nums[i]);
        else
            positive.emplace_back(nums[i]);
    }
    vector<int> ans;
    for (int j = 0; j < nums.size() / 2; j++)
    {
        ans.emplace_back(positive[j]);
        ans.emplace_back(negative[j]);
    }
    return ans;
}

int main()
{

    return 0;
}