/*

2535. Difference Between Element Sum and Digit Sum of an Array
https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/

Status - Unsubmitted

*/
#include <bits/stdc++.h>
using namespace std;

int digit_sum(int n)
{
    int sum_of_digit = 0;
    while (n > 0)
    {
        int last_digit = n % 10;
        sum_of_digit = sum_of_digit + last_digit;
        n = n / 10;
    }
    return sum_of_digit;
}
int differenceOfSum(vector<int> &nums)
{
    int size = nums.size();
    int sum = 0;
    int digitSum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + nums[i];
        digitSum = digitSum + digit_sum(nums[i]);
    }
    int ans = sum - digitSum;
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << differenceOfSum(v) << endl; 
}