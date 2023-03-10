/*

485. Max Consecutive Ones
https://leetcode.com/problems/max-consecutive-ones/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums)
{
    int count = 0;
    int max_time_occur = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
            count++;
        else
            count = 0;

        max_time_occur = max(count, max_time_occur);
    }
    return max_time_occur;
}

int main()
{

    return 0;
}