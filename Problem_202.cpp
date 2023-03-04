/*

2442. Count Number of Distinct Integers After Reverse Operations
https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countDistinctIntegers(vector<int> &nums)
{
    set<int> s;
    for (int i = 0; i < nums.size(); i++)
    {
        s.insert(nums[i]);

        string str = to_string(nums[i]);
        reverse(str.begin(), str.end());

        int num = stoi(str);
        s.insert(num);
    }
    return s.size();
}

int main()
{

    return 0;
}