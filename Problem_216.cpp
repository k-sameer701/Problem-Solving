/*

1985. Find the Kth Largest Integer in the Array
https://leetcode.com/problems/find-the-kth-largest-integer-in-the-array/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

string kthLargestNumber(vector<string> &nums, int k)
{
    vector<int> v;
    for (int i = 0; i < nums.size(); i++)
    {
        int x = stoi(nums[i]);
        v.emplace_back(x);
    }
    sort(v.begin(), v.end());

    string str = to_string(v[v.size() - k]);

    return str;
}

int main()
{

    return 0;
}