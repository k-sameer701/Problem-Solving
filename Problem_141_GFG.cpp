/*
Change the string

https://practice.geeksforgeeks.org/problems/change-the-string3541/1?page=10&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string modify(string s)
{
    // your code here
    for (int i = 0; i < s.size(); i++)
    {
        if (s[0] >= 'A' && s[0] <= 'Z')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
    return s;
}

int main()
{
    return 0;
}