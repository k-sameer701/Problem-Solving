/*

2154. Keep Multiplying Found Values by Two
https://leetcode.com/problems/keep-multiplying-found-values-by-two/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int findFinalValue(vector<int> &nums, int original)
{

    // USING RECURSION

    int duplicate = original;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == original)
        {
            duplicate = original * 2;
            return findFinalValue(nums, duplicate);
        }
    }
    return duplicate;
}

int main()
{

    return 0;
}