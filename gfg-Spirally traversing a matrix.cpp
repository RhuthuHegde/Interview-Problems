// Given a matrix of size r*c. Traverse the matrix in spiral form.
//
// Example 1:
//
// Input:
// r = 4, c = 4
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12},
//            {13, 14, 15,16}}
// Output:
// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
// Example 2:
//
// Input:
// r = 3, c = 4
// matrix[][] = {{1, 2, 3, 4},
//            {5, 6, 7, 8},
//            {9, 10, 11, 12}}
// Output:
// 1 2 3 4 8 12 11 10 9 5 6 7
// Explanation:
// Applying same technique as shown above,
// output for the 2nd testcase will be
// 1 2 3 4 8 12 11 10 9 5 6 7.
//
// Your Task:
// You dont need to read input or print anything. Complete the function spirallyTraverse() that takes matrix, r and c as input parameters and returns a list of integers denoting the spiral traversal of matrix.
//
// Expected Time Complexity: O(r*c)
// Expected Auxiliary Space: O(r*c), for returning the answer only.
//
// Constraints:
// 1 <= r, c <= 100
// 0 <= matrixi <= 100
//
// Program
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
        // code here
        vector<int>v;
        int top=0,down=r-1;
        int left=0,right=c-1,dir=0;
        while(top<=down && left<=right)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                v.push_back(matrix[top][i]);
                top++;
                dir=1;
            }
            else if(dir==1)
            {
                for(int i=top;i<=down;i++)
                v.push_back(matrix[i][right]);
                right--;
                dir=2;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                v.push_back(matrix[down][i]);
                down--;
                dir=3;
            }
            else if(dir==3)
            {
                for(int i=down;i>=top;i--)
                v.push_back(matrix[i][left]);
                left++;
                dir=0;
            }
        }
        return v;
    }
};
