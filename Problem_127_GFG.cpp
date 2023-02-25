/*
The Penalty Shootout

https://practice.geeksforgeeks.org/problems/the-penalty-shootout3810/1?page=8&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int penaltyScore(string S)
{
    // Your code goes here
    int count = 0;
    for (int i = 0; i < S.size() - 1; i++)
    {
        if (S[i] == '2' && S[i + 1] == '1')
        {
            count++;
            i++;
        }
    }
    return count;
}

int main()
{
    return 0;
}