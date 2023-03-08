/*

283. Move Zeroes
https://leetcode.com/problems/move-zeroes/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{

    // OPTIMISED
    int j = -1, n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{

    return 0;
}