/*

2119. A Number After a Double Reversal
https://leetcode.com/problems/a-number-after-a-double-reversal/

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool isSameAfterReversals(int num)
{
    int reversed = 0;
    int copy_of_number = num;
    while (num > 0)
    {
        int ld = num % 10;
        reversed = (10 * reversed) + ld;
        num = num / 10;
    }
    int reversed_again = 0;
    while (reversed > 0)
    {
        int lld = reversed % 10;
        reversed_again = (10 * reversed_again) + lld;
        reversed = reversed / 10;
    }
    if (reversed_again == copy_of_number)
        return true;

    return false;
}

int main()
{
    int n ;
    cin >> n;

    cout << isSameAfterReversals(n) << endl;
}