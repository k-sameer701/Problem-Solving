/*
Half N by M

https://practice.geeksforgeeks.org/problems/geek-and-coffee-shop5721/1?page=7&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int mthHalf(int N, int M)
{
    // code here
    for (int i = 1; i < M; i++)
    {
        N = N / 2;
    }
    return N;
}

int main()
{
    return 0;
}