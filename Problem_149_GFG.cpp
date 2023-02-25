/*
Sort the fest

https://practice.geeksforgeeks.org/problems/sort-the-fest0016/1?page=11&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string is_common(vector<string> &s, vector<string> &t)
{
    // Code here
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < t.size(); j++)
        {
            if (s[i] == s[j])
                count++;
        }
    }
    if (count > 0)
        return "CHANGE";

    return "BEHAPPY";
}

int main()
{
    return 0;
}