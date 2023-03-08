/*

1528. Shuffle String
https://leetcode.com/problems/shuffle-string/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int> &indices)
{

    vector<pair<int, char>> ans;
    for (int i = 0; i < s.size(); i++)
    {
        ans.push_back(make_pair(indices[i], s[i]));
    }

    sort(ans.begin(), ans.end());

    string restore;
    for (int i = 0; i < s.size(); i++)
    {
        restore.push_back(ans[i].second);
    }
    return restore;
}

int main()
{

    return 0;
}