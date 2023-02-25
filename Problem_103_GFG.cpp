/*
Midori and chocolates

https://practice.geeksforgeeks.org/problems/midori-and-chocolates2438/1?page=1&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

long long int leftShops(long long int i, long long int L)
{
    // code here

    long long int sum = pow(2, L) - i;
    return sum;
}

int main()
{
    return 0;
}