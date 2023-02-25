/*
Check if a string is Isogram or not

https://practice.geeksforgeeks.org/problems/check-if-a-string-is-isogram-or-not-1587115620/1?page=6&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool isIsogram(string s)
{
    // Your code here
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second > 1)
            return false;
    }
    return true;
}

int main()
{
    return 0;
}