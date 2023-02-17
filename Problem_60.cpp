/*

1773. Count Items Matching a Rule
https://leetcode.com/problems/count-items-matching-a-rule/
Status - UnSubmitted -> WRONG ANSWER

*/
#include <bits/stdc++.h>
using namespace std;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    int store = 0;
    for (int i = 0; i < items.size(); i++)
    {
        int count = 0;
        for (int j = 0; j < items[i].size(); j++)
        {
            if (items[i][j] == ruleValue)
                count++;
        }
        store = count;
    }
    int ans = store + 1;
    return ans;
}

int main()
{

    return 0;
}