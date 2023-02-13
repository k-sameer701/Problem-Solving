/*

1313. Decompress Run-Length Encoded List
https://leetcode.com/problems/decompress-run-length-encoded-list/description/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (2 * i <= nums.size() - 1)       // <- RUN TIME ERROR CHECK THIS LINE
        { 
            int frequency = nums[2 * i];
            int value = nums[2 * i + 1];
            for (int j = 0; j < frequency; j++)
            {
                temp.emplace_back(value);
            }
        }
    }
    return temp;
}

int main()
{

    return 0;
}