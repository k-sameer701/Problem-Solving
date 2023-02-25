/*
Count type of Characters

https://practice.geeksforgeeks.org/problems/count-type-of-characters3635/1?page=8&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> count(string s)
{
    // code here.
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    vector<int> v;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            count1++;
        else if (s[i] >= 'a' && s[i] <= 'z')
            count2++;
        else if (s[i] >= 48 && s[i] <= 57)
            count3++;
        else
            count4++;
    }
    v.emplace_back(count1);
    v.emplace_back(count2);
    v.emplace_back(count3);
    v.emplace_back(count4);
    return v;
}

int main()
{
    return 0;
}