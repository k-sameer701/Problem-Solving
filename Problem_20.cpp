/*

771. Jewels and Stones
https://leetcode.com/problems/jewels-and-stones/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int numJewelsInStones(string jewels, string stones)
{
    int count = 0;
    for (int i = 0; i < jewels.size(); i++)
    {
        for (int j = 0; j < stones.size(); j++)
        {
            if (jewels[i] == stones[j])
                count++;
        }
    }
    return count;
}

int main()
{

    string str1, str2;
    cin >> str1 >> str2;
    cout << numJewelsInStones(str1, str2) << endl;
}