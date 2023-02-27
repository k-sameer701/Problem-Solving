/*
1207. Unique Number of Occurrences
https://leetcode.com/problems/unique-number-of-occurrences/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int> &arr)
{
    map<int, int> mpp;

    for (int i = 0; i < arr.size(); i++)
    {
        mpp[arr[i]]++;
    }

    vector<int> v;

    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        v.emplace_back(it->second);
    }

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
            return false;
    }

    return true;
}

int main()
{

    return 0;
}