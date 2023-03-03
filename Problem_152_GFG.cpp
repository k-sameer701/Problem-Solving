/*

Second Largest

https://practice.geeksforgeeks.org/problems/second-largest3735/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=second-largest

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int print2largest(int arr[], int n)
{
    // code here

    // OPTIMISED :

    int largest = arr[0];
    int second_Largest = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_Largest = largest;
            largest = arr[i];
        }
        else if ((arr[i] > second_Largest) && (arr[i] != largest))
            second_Largest = arr[i];
    }
    return second_Largest;
}

int main()
{
    return 0;
}