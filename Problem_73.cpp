/*

977. Squares of a Sorted Array
https://leetcode.com/problems/squares-of-a-sorted-array/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        int squares = nums[i] * nums[i];
        temp.emplace_back(squares);
    }
    sort(temp.begin(), temp.end());
    return temp;
}

int main()
{

    return 0;
}