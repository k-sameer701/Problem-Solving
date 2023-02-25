/*
Strong Numbers

https://practice.geeksforgeeks.org/problems/strong-numbers4336/1?page=7&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = i * f;
    }
    return f;
}
int is_StrongNumber(int n)
{
    // Code here.
    int sum = 0;
    int cp = n;
    while (n > 0)
    {
        int ld = n % 10;
        sum = sum + fact(ld);
        n = n / 10;
    }
    if (cp == sum)
        return 1;

    return 0;
}

int main()
{
    return 0;
}