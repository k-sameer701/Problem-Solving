/*

442. Find All Duplicates in an Array
https://leetcode.com/problems/find-all-duplicates-in-an-array/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{

    vector<int> v;
    unordered_map<int, int> mpp;

    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }

    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second > 1)
            v.emplace_back(it->first);
    }
    return v;
}

int main()
{

    return 0;
}