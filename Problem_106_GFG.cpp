/*

Sum of elements in a matrix

https://practice.geeksforgeeks.org/problems/sum-of-elements-in-a-matrix2000/1?page=2&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int sumOfMatrix(int N, int M, vector<vector<int>> Grid)
{
    // code here
    int sum = 0;
    for (int i = 0; i < Grid.size(); i++)
    {
        for (int j = 0; j < Grid[i].size(); j++)
        {
            sum = sum + Grid[i][j];
        }
    }
    return sum;
}

int main()
{
    return 0;
}