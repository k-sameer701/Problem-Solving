/*
Pattern Printing

https://practice.geeksforgeeks.org/problems/pattern-printing1347/1?page=8&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

void printPattern(int N)
{
    // Write Your Code here
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << " ";
    }
}

int main()
{
    return 0;
}
