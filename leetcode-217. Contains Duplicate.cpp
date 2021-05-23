// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
//
//
//
// Example 1:
//
// Input: nums = [1,2,3,1]
// Output: true
// Example 2:
//
// Input: nums = [1,2,3,4]
// Output: false
// Example 3:
//
// Input: nums = [1,1,1,3,3,4,3,2,4,2]
// Output: true
// Constraints:
//
// 1 <= nums.length <= 105
// -109 <= nums[i] <= 109
//
// Program
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        long long int n=nums.size();
        vector<int>::iterator point;
        sort(nums.begin(),nums.end());
        point=unique(nums.begin(),nums.end());
        long long int count=distance(nums.begin(),point);
        // cout<<count<<" "<<n;
        if(n>count)
            return true;
        else
            return false;
//alternative method with sets
        // unordered_set<int>s;
        // for(int i=0;i<n;i++)
        //     s.insert(nums[i]);
        // int m=s.size();
        // if(m<n)
        //     return true;
        // else
        //     return false;

    }
};
