/*

1979. Find Greatest Common Divisor of Array
https://leetcode.com/problems/find-greatest-common-divisor-of-array/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int findGCD(vector<int> &nums)
{
    int size = nums.size();
    sort(nums.begin(), nums.end());
    int small = nums[0];
    int large = nums[size - 1];
    int count;
    for (int i = 1; i <= large; i++)
    {
        if (small % i == 0 && large % i == 0)
            count = i;
    }
    return count;
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
    cout << findGCD(v) << endl;
}