/*
Multiply Array

https://practice.geeksforgeeks.org/problems/multiply-array-1658312632/1?page=10&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int product(int arr[], int n)
{
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        mul = mul * arr[i];
    }
    return mul;
}

int main()
{
    return 0;
}