/*

Searching an element in a sorted array (Ternary Search)

https://practice.geeksforgeeks.org/problems/3d27d4683c121c1f152ee8f41279255dc4430cf6/1?page=1&category[]=Searching&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int ternarySearch(int arr[], int N, int K)
{
    // Your code here
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == K)
            return 1;
    }
    return -1;
}

int main()
{
    return 0;
}