/*

1773. Count Items Matching a Rule
https://leetcode.com/problems/count-items-matching-a-rule/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    int n = items.size();
    int index;
    if (ruleKey == "type")
    {
        index = 0;
    }
    else if (ruleKey == "color")
    {
        index = 1;
    }
    else
    {
        index = 2;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (items[i][index] == ruleValue)
        {
            count++;
        }
    }
    return count;
}

int main()
{

    return 0;
}