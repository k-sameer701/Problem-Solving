/*

169. Majority Element
https://leetcode.com/problems/majority-element/
Status - Submitted

*/
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int maj = 0;
        for(auto it=mpp.begin(); it!=mpp.end(); it++){
            if(it->second > nums.size()/2)
                maj = maj + it->first;
        }
        return maj;
    }

int main()
{

    return 0;
}