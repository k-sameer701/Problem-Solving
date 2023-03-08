/*

189. Rotate Array

https://leetcode.com/problems/rotate-array/description/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k)
{

    // BRUTE-FORCE 🦥
    int n = nums.size();
    int d = n - k;

    if (d > nums.size())
        d = d % nums.size();

    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.emplace_back(nums[i]);
    }

    for (int i = d; i < n; i++)
    {
        nums[i - d] = nums[i];
    }

    int j = 0;

    for (int i = n - d; i < n; i++)
    {
        nums[i] = temp[j];
        j++;
    }

    // OPTIMISED 🔥
    /*
    if(k > nums.size())
        k = k % nums.size();

    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    */
}

int main()
{

    return 0;
}