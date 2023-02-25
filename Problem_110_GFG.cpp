/*
Sum Of Digits

https://practice.geeksforgeeks.org/problems/sum-of-digits1742/1?page=5&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int N)
{
    // code here
    int sum = 0;
    while (N > 0)
    {
        int last_digit = N % 10;
        sum = sum + last_digit;
        N = N / 10;
    }
    return sum;
}

int main()
{
    return 0;
}