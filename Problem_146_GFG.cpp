/*
Split Strings

https://practice.geeksforgeeks.org/problems/split-strings5211/1?page=11&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<string> splitString(string S)
{
    string alphabets, numbers, special;

    for (int i = 0; i < S.size(); i++)
    {
        if ((S.at(i) >= 97 && S[i] <= 122) || (S[i] >= 65 && S[i] <= 90))
            alphabets += S[i];

        else if (S[i] >= 48 && S[i] <= 57)
            numbers += S[i];

        else
            special += S[i];
    }

    return {alphabets, numbers, special};
}

int main()
{
    return 0;
}