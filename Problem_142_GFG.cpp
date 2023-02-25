/*
Replace all 0's with 5

https://practice.geeksforgeeks.org/problems/replace-all-0-with-5-in-an-input-integer/1?page=9&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n)
{
    // Your code here
    string str = to_string(n);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '0')
        {
            str[i] = '5';
        }
    }
    int ans = stoi(str);
    return ans;
}

int main()
{
    return 0;
}