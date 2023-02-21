/*

Mean

https://practice.geeksforgeeks.org/problems/mean0021/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Mathematical&category[]=Sorting&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int mean(int N, int A[])
{
    // code here
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + A[i];
    }

    return sum / N;
}

int main()
{
    return 0;
}