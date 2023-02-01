/*

2221. Find Triangular Sum of an Array
https://leetcode.com/problems/find-triangular-sum-of-an-array/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int triangularSum(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums[0];

    while (true)
    {
        vector<int> v;
        for (int i = 1; i < nums.size(); i++)
        {
            int sum = (nums[i] + nums[i - 1]) % 10;
            v.emplace_back(sum);
        }
        if (v.size() == 1)
            return v[0];

        nums = v;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << triangularSum(v);
}