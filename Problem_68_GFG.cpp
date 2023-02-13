/*

Red OR Green

https://practice.geeksforgeeks.org/problems/red-or-green5711/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Strings&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int RedOrGreen(int N, string S)
{
    // code here
    int count_Red = 0, count_Green = 0;
    for (int i = 0; i < N; i++)
    {
        if (S[i] == 'R')
            count_Red++;
        else
            count_Green++;
    }
    int mini = min(count_Red, count_Green);
    return mini;
}

int main()
{
    return 0;
}