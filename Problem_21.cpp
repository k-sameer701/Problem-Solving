/*

1480. Running Sum of 1d Array
https://leetcode.com/problems/running-sum-of-1d-array/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    int s = nums.size();
    int sum = 0;
    vector<int> v;
    for (int i = 0; i < s; i++)
    {
        sum = sum + nums[i];
        v.push_back(sum);
    }
    return v;
}

int main()
{
    vector<int> num;
    int size;
    cin >> size;
    for(int i=0; i<size; i++){
        int x; 
        cin >> x;
        num.push_back(x);
    }
    runningSum(num);
}