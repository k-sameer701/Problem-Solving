/*

1816. Truncate Sentence
https://leetcode.com/problems/truncate-sentence/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

string truncateSentence(string s, int k)
{

    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            count++;
            if (k == count)
            {
                s.erase(i);
            }
        }
    }
    return s;
}

int main()
{

    return 0;
}