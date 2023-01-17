/*

217. Contains Duplicate
https://leetcode.com/problems/contains-duplicate/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
                return true;
        }
    }
    return false;
}

int main()
{
    vector<int> v;
    for(int i=0; i<v.size(); i++){
        v.push_back(i);
    }
    cout << containsDuplicate(v) << endl;
}