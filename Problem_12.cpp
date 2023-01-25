/*

1512. Number of Good Pairs
https://leetcode.com/problems/number-of-good-pairs/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    int count = 0;
    int size = nums.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (nums[i] == nums[j] && i < j)
                count++;
        }
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
    cout << numIdenticalPairs(v) << endl;
}