/*

2053. Kth Distinct String in an Array
https://leetcode.com/problems/kth-distinct-string-in-an-array/description/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string> &arr, int k)
{
    unordered_map<string, int> mpp;
    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (mpp[arr[i]] == 1)
            k--;
        if (k == 0)
            return arr[i];
    }
    return "";
}

int main()
{

    return 0;
}