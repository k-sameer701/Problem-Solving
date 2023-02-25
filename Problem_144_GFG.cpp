/*
Rock Paper Scissors!

https://practice.geeksforgeeks.org/problems/rock-paper-scissors2830/1?page=10&difficulty[]=-2&difficulty[]=-1&sortBy=accuracy

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string gameResult(string s)
{
    // code here.
    if (s[0] == 'R' && s[1] == 'S')
        return "A";
    else if (s[0] == 'R' && s[1] == 'P')
        return "B";
    else if (s[0] == 'R' && s[1] == 'R')
        return "DRAW";
    else if (s[0] == 'S' && s[1] == 'P')
        return "A";
    else if (s[0] == 'S' && s[1] == 'R')
        return "B";
    else if (s[0] == 'P' && s[1] == 'R')
        return "A";
    else if (s[0] == 'P' && s[1] == 'S')
        return "B";
    else if (s[0] == 'S' && s[1] == 'S')
        return "DRAW";
    else if (s[0] == 'P' && s[1] == 'P')
        return "DRAW";
    
}

int main()
{
    return 0;
}