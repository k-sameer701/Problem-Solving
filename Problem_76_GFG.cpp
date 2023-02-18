/*

Replace all 0's with 5

https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?page=1&difficulty[]=-2&difficulty[]=-1&difficulty[]=0&category[]=Arrays&sortBy=accuracy

Status - UnSubmitted -> Runtime Error

*/
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n)
{
    // Your code here
    string str = to_string(n);
    string x;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == '0')
            x = x + '5';
        else
            x = x + str[i];
    }

    int ans = stoi(x);
    return ans;
}

int main()
{
    return 0;
}