/*
Common Divisors

https://practice.geeksforgeeks.org/problems/common-divisors4712/1?page=7&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

long long int commDiv(long long int a, long long int b)
{
    // code here
    long long count = 0;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    return 0;
}