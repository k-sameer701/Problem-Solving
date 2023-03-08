/*
Quick Left Rotation

https://practice.geeksforgeeks.org/problems/quick-left-rotation3806/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-left-rotation

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int k, int n)
{
    // BRUTE - FORCE :
    int temp[k];
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }

    int j = 0;
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[j];
        j++;
    }
}

int main()
{
    return 0;
}