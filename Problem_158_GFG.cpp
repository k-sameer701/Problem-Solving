/*

Move all zeroes to end of array

https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void pushZerosToEnd(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    return 0;
}