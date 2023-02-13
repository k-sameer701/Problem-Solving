/*

Largest Element in Array

https://practice.geeksforgeeks.org/problems/largest-element-in-array4009/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Arrays&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> &arr, int n)
{
    // APPROACH 1:

    // return *max_element(arr.begin(), arr.end());

    // APPROACH 2:

    sort(arr.begin(), arr.end());
    int ans = arr[n - 1];
    return ans;
}

int main()
{
    return 0;
}