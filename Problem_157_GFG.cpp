/*

Rotating an Array

https://practice.geeksforgeeks.org/problems/reversal-algorithm5340/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=reversal-algorithm

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    // code here
    if (d > n)
        d = d % n;

    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    int j = 0;
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}

int main()
{
    return 0;
}