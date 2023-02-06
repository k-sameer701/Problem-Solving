/*

Sum of Array Elements

https://practice.geeksforgeeks.org/problems/sum-of-array-elements2502/1?page=2&difficulty[]=-2&difficulty[]=-1&sortBy=submissions


Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int sumElement(int arr[],int n)
{
    //Your code here
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}


int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // cout << findSum(a, n);
}