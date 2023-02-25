/*
Sum Array Puzzle

https://practice.geeksforgeeks.org/problems/sum-array-puzzle/1?page=9&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void SumArray(int arr[], int n)
{
    // you code here
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=sum-arr[i];
    }
}

int main()
{
    return 0;
}