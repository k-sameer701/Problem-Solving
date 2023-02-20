/*

Find the element that appears once

https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1?page=1&category[]=Searching&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int search(int A[], int N)
{
    // code
    vector<int> v;
    map<int, int> mpp;
    for (int i = 0; i < N; i++)
    {
        mpp[A[i]]++;
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