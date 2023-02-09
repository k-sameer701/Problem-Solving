/*

1929. Concatenation of Array
https://leetcode.com/problems/concatenation-of-array/


Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    vector<int> ans;
    for (int i = 0; i < nums.size(); i++)
    {
        int x = nums[i];
        ans.emplace_back(x);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        int x = nums[i];
        ans.emplace_back(x);
    }
    return ans;
}
int main()
{
    return 0;
}