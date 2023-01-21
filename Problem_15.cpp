/*

1812. Determine Color of a Chessboard Square
https://leetcode.com/problems/determine-color-of-a-chessboard-square/

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool squareIsWhite(string coordinates)
{
    int ans = 0;
    for (int i = 0; i < 2; i++)
    {
        ans = ans + coordinates[i];
    }
    // cout << ans;
    if (ans % 2 == 0)
        return false;

    return true;
}

int main()
{
    string coordinates;
    cin >> coordinates;

    cout << squareIsWhite(coordinates) << endl;
}