/*

Floyd's triangle

https://practice.geeksforgeeks.org/problems/floyds-triangle1222/1?page=9&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void printFloydTriangle(int N)
{
    // Write Your Code here
    int k = 1;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}

int main()
{
    return 0;
}