/*

2169. Count Operations to Obtain Zero
https://leetcode.com/problems/count-operations-to-obtain-zero/

Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int countOperations(int num1, int num2)
{
    int count = 0;
    while (num1 > 0 && num2 > 0)
    {
        if (num1 > num2)
            num1 = num1 - num2;
        else if (num2 > num1)
            num2 = num2 - num1;
        else if (num1 == num2)
            num1 = num1 - num2;

        count++;
    }
    return count;
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << countOperations(n1, n2);
}