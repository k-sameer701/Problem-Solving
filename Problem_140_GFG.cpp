/*

Ladoo problem

https://practice.geeksforgeeks.org/problems/ladoo-problem2929/1?page=10&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int divideLadoo(int N, int A[])
{
    // code here
    unordered_map<int, int> mpp;
    for (int i = 0; i < N; i++)
    {
        mpp[A[i]]++;
    }
    return mpp.size();
}

int main()
{
    return 0;
}