/*

1748. Sum of Unique Elements
https://leetcode.com/problems/sum-of-unique-elements/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int sumOfUnique(vector<int> &nums)
{
    map<int, int> mpp;
    for (int i = 0; i < nums.size(); i++)
    {
        mpp[nums[i]]++;
    }
    long long int sum = 0;
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second == 1)
            sum = sum + it->first;
    }
    return sum;
}

int main()
{

    return 0;
}