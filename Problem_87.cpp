/*

1832. Check if the Sentence Is Pangram
https://leetcode.com/problems/check-if-the-sentence-is-pangram/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool checkIfPangram(string sentence)
{

    unordered_map<char, int> mpp;
    for (int i = 0; i < sentence.size(); i++)
    {
        mpp[sentence[i]]++;
    }
    int sum = 0;
    for (auto it = mpp.begin(); it != mpp.end(); it++)
    {
        sum = sum + it->second;
        if (sum >= 26)
            return true;
    }
    return false;
}

int main()
{

    return 0;
}