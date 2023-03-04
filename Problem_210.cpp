/*

389. Find the Difference
https://leetcode.com/problems/find-the-difference/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

char findTheDifference(string s, string t)
{
    string str = s + t;
    map<char, int> mpp;
    for (int i = 0; i < str.size(); i++)
    {
        mpp[str[i]]++;
    }
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second == 1)
            return it->first;
    }
    return 'a';
}

int main()
{

    return 0;
}