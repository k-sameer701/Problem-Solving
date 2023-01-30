/*

2011. Final Value of Variable After Performing Operations
https://leetcode.com/problems/final-value-of-variable-after-performing-operations/

Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int finalValueAfterOperations(vector<string> &operations)
{
    int count = 0;
    int size = operations.size();
    for (int i = 0; i < size; i++)
    {
        if (operations[i] == "++X" || operations[i] == "X++")
        {
            count = count+1;
        }
        if (operations[i] == "--X" || operations[i] == "X--")
        {
            count = count-1;
        }
    }
    return count;
}

int main()
{
    int size;
    cin >> size;
    vector<string> str;
    for (int i = 0; i < size; i++)
    {
        string x;
        cin >> x;
        str.push_back(x);
    }
    cout << finalValueAfterOperations(str) << endl;
}