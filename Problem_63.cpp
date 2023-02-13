/*

2418. Sort the People
https://leetcode.com/problems/sort-the-people/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<string> sortPeople(vector<string> &names, vector<int> &heights)
{
    map<int, string> mpp;
    for (int i = 0; i < heights.size(); i++)
    {
        // MAPPING OF HEIGHTS WITH NAMES
        mpp[heights[i]] = names[i];
    }

    vector<string> str;

    for (auto it = mpp.rbegin(); it != mpp.rend(); it++)
    {
        str.emplace_back(it->second);
    }
    return str;
}

int main()
{

    return 0;
}