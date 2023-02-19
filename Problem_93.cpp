/*

162. Find Peak Element
https://leetcode.com/problems/find-peak-element/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int findPeakElement(vector<int> &nums)
{
    int maxi = *max_element(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (maxi == nums[i])
            return i;
    }
    return -1;
}

int main()
{

    return 0;
}