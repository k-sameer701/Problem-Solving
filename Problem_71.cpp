/*

1833. Maximum Ice Cream Bars
https://leetcode.com/problems/maximum-ice-cream-bars/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int maxIceCream(vector<int> &costs, int coins)
{
    int count = 0, sum = 0;
    for (int i = 0; i < costs.size(); i++)
    {
        sum = sum + costs[i];
        if (sum <= coins)
        {
            count++;
        }
        else if (sum > coins)
        {
            sum = sum - costs[i];
        }
    }
    return count;
}

int main()
{

    return 0;
}