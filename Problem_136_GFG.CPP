/*
Repeated sum of digits

https://practice.geeksforgeeks.org/problems/repeated-sum-of-digits3955/1?page=9&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int repeatedSumOfDigits(int N)
{
    // code here
    if (N % 9 == 0)
        return 9;

    return N % 9;
}

int main()
{
    return 0;
}