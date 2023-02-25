/*
Pattern of Strings

https://practice.geeksforgeeks.org/problems/pattern-of-strings3829/1?page=11&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<string> pattern(string S)
{
    // Your code goes here
    vector<string> ans;
    for (int i = 0; i < S.size(); i++)
    {
        string temp = "";
        for (int j = 0; j < S.size() - i; j++)
        {
            temp = temp + S[j];
        }
        ans.push_back(temp);
    }
    return ans;
}

int main()
{
    return 0;
}