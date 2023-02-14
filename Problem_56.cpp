/*

1470. Shuffle the Array
https://leetcode.com/problems/shuffle-the-array/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0;
        int j = n;
        vector<int> temp;
        while(i<n){
            temp.emplace_back(nums[i]);
            temp.emplace_back(nums[j]);
            i++;
            j++;
        }
        return temp;
    }

int main()
{

    return 0;
}