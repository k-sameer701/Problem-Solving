/*

1941. Check if All Characters Have Equal Number of Occurrences
https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

bool areOccurrencesEqual(string s)
{
    map<char, int> mpp;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        mpp[s[i]]++;
    }

    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        v.push_back(it->second);
    }

    // IF ERROR UNCOMMENT NEXT LINE
    // sort(v.begin(), v.end());

    for (int i = 0; i < v.size() - 1; i++)
    {
        if (v[i] != v[i + 1])
            return false;
    }
    return true;
}

int main()
{

    return 0;
}