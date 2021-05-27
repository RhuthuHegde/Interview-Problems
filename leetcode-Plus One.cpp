// Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.
//
// The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.
//
// You may assume the integer does not contain any leading zero, except the number 0 itself.
//
//
//
// Example 1:
//
// Input: digits = [1,2,3]
// Output: [1,2,4]
// Explanation: The array represents the integer 123.
// Example 2:
//
// Input: digits = [4,3,2,1]
// Output: [4,3,2,2]
// Explanation: The array represents the integer 4321.
// Constraints:
//
// 1 <= digits.length <= 100
// 0 <= digits[i] <= 9
//
// Program
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
	// for (int i = n - 1; i >= 0; i--)
	// {
	// 	if (digits[i] == 9)
	// 	{
	// 		digits[i] = 0;
	// 	}
	// 	else
	// 	{
	// 		digits[i]++;
	// 		return digits;
	// 	}
	// }
	// 	digits[0] =1;
	// 	digits.push_back(0);
	// return digits;
        int carry=0;
        vector<int>v;
        for(int i=n-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                carry=1;
                digits[i]=0;
                v.push_back(0);
            }
            else
            {
                if(carry==1)
                {
                    digits[i]+=carry;
                    carry=0;
                    return digits;
                }
                digits[i]++;
                return digits;
            }
        }
        v.push_back(1);
            reverse(v.begin(),v.end());
        return v;
    }
};
