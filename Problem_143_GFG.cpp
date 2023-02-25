/*

Count numbers divisible by M

https://practice.geeksforgeeks.org/problems/count-numbers-divisible-by-m1524/1?page=10&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countDivisibles(int A, int B, int M)
{
    // code here
    int count = 0;
    for (int i = A; i <= B; i++)
    {
        if (i % M == 0)
            count++;
    }
    return count;
}

int main()
{
    return 0;
}