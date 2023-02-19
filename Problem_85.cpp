/*

728. Self Dividing Numbers
https://leetcode.com/problems/self-dividing-numbers/description/
Status - UnSubmitted

*/
#include <bits/stdc++.h>
using namespace std;

bool is_Self_Dividing(int num)
{
    int copy_of_num = num;
    while (copy_of_num != 0)
    {
        int remainder = copy_of_num % 10;
        if (remainder == 0 || num % remainder != 0)
            return false;
        copy_of_num = copy_of_num / 10;
    }
    return true;
}
vector<int> selfDividingNumbers(int left, int right)
{
    vector<int> v;
    for (int i = left; i <= right; i++)
    {
        if (is_Self_Dividing(i))
            v.push_back(i);
    }
    return v;
}

int main()
{

    return 0;
}