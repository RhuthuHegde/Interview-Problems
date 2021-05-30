// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
//
// You can return the answer in any order.
//
//
//
// Example 1:
//
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:
//
// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:
//
// Input: nums = [3,3], target = 6
// Output: [0,1]
//
//
// Constraints:
//
// 2 <= nums.length <= 104
// -109 <= nums[i] <= 109
// -109 <= target <= 109
// Only one valid answer exists.
//
// Program
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>hash;
        vector<int>v;
        int n=nums.size();
        int i=0;
        // use a hash map to store the values with the index
        for(int i=0;i<n;i++)
        hash[nums[i]]=i;
        while(i<n){
            int y=target-nums[i];
            // search if the hashmap has the y value and if the value of i  matches with the index stored in it
            // if it does then ignore and increment the value of i.
            if(hash.find(y)!=hash.end() && i!=hash[y])
            {
                // v.push_back(i);
                // v.push_back(hash[y]);
                // break;
                return{i,hash[y]};
            }
            i++;
        }
        // returns an empty list
        return {};
    }
};
