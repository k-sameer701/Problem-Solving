/*

Find the element that appears once in sorted array

https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array0624/1?page=1&category[]=Searching&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int findOnce(int arr[], int n)
{
    // code here.
    vector<int> v;
    map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        if (it->second == 1)
            return it->first;
    }

    return -1;
}

int main()
{
    return 0;
}