// Given an array, rotate the array to the right by k steps, where k is non-negative.
//
// Example 1:
//
// Input: nums = [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]
// Explanation:
// rotate 1 steps to the right: [7,1,2,3,4,5,6]
// rotate 2 steps to the right: [6,7,1,2,3,4,5]
// rotate 3 steps to the right: [5,6,7,1,2,3,4]
//
// Input: nums = [-1,-100,3,99], k = 2
// Output: [3,99,-1,-100]
// Explanation:
// rotate 1 steps to the right: [99,-1,-100,3]
// rotate 2 steps to the right: [3,99,-1,-100]
//
// Constraints:
//
// 1 <= nums.length <= 105
// -231 <= nums[i] <= 231 - 1
// 0 <= k <= 105
//
// Hide Hint #1
// The easiest solution would use additional memory and that is perfectly fine.
//
// Hide Hint #3
// One line of thought is based on reversing the array (or parts of it) to obtain the desired result.
// Think about how reversal might potentially help us out by using an example.


#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        //taking extra memory with time complexity O(n) and space O(n).
        // int i=0;
        // // vector<int>v(n);
        // while(i<n)
        // {
        //     v[(i+k)%n]=nums[i];
        //     i++;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     nums[i]=v[i];
        // }
//taking time complexity of O(n) but space of O(1).
        k=k%n;
        reverse(nums,0,n-1);
        reverse(nums,0,k-1);
        reverse(nums,k,n-1);
    }

    void reverse(vector<int>& nums,int start,int end)
    {
        while(start<end)
        {
            int temp=nums[start];
            nums[start]=nums[end];
            nums[end]=temp;
            start++;
            end--;
        }
    }
};
