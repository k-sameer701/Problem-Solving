/*

1833. Maximum Ice Cream Bars
https://leetcode.com/problems/maximum-ice-cream-bars/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int> &costs, int coins)
{

    int count = 0;

    sort(costs.begin(), costs.end());

    for (int i = 0; i < costs.size(); i++)
    {
        if (costs[i] > coins)
            break;

        coins -= costs[i];
        count++;
    }
    return count;
}

int main()
{

    return 0;
}