/*

1431. Kids With the Greatest Number of Candies
https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    int maxi = *max_element(candies.begin(), candies.end());
    vector<bool> check;
    for (int i = 0; i < candies.size(); i++)
    {
        if ((candies[i] + extraCandies) >= maxi)
        {
            check.push_back(1);
        }
        else
            check.push_back(0);
    }
    return check;
}

int main()
{

    return 0;
}