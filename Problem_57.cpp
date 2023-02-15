/*

1672. Richest Customer Wealth
https://leetcode.com/problems/richest-customer-wealth/description/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{

    vector<int> v;
    for (int i = 0; i < accounts.size(); i++)
    {
        int store_Sum = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            store_Sum = store_Sum + accounts[i][j];
        }
        v.emplace_back(store_Sum);
    }

    sort(v.rbegin(), v.rend());

    int sum = v[0];
    return sum;
}

int main()
{

    return 0;
}