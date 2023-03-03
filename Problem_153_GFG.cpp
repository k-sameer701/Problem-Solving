/*

Check if array is sorted

https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=check-if-an-array-is-sorted

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool arraySortedOrNot(int arr[], int n)
{
    // code here
    int i = 0;
    while (i < n)
    {
        if (arr[i] <= arr[i + 1])
        {
            i++;
        }
        else
            return false;
    }
    return true;
}

int main()
{
    return 0;
}