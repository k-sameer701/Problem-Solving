/*

Count the Zeros

https://practice.geeksforgeeks.org/problems/count-the-zeros2550/1?page=1&difficulty[]=0&category[]=Arrays&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n)
{
    // code here
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            count++;
    }
    return count;
}

int main()
{
    return 0;
}