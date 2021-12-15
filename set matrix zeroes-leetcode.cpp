// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's,
//  and return the matrix.
//
// You must do it in place.
// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]]
// Constraints:
//
// m == matrix.length
// n == matrix[0].length
// 1 <= m, n <= 200
// -231 <= matrix[i][j] <= 231 - 1
//
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //brute force solution uisng sets
        // set<int>r,c;
        // int m=matrix.size(), n=matrix[0].size();
        // for(int i=0;i<m;i++){
        //     for(int j=0;j<n;j++)
        //     {
        //         if(matrix[i][j]==0)
        //         {
        //             r.insert(i);
        //             c.insert(j);
        //         }
        //     }}
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         if((r.find(i)!=r.end())||(c.find(j)!=c.end()))
        //             matrix[i][j]=0;
        //     }
        // }
        //optimal solution with O(1) auxilliary space
        int m=matrix.size(),n=matrix[0].size();
        bool firstcol=false;
        for(int i=0;i<m;i++)
        {
                if(matrix[i][0]==0)
                    firstcol=true;
            for(int j=1;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=m-1;i>=1;i--)
        {
            for(int j=n-1;j>=1;j--)
            {
                if(matrix[i][0]==0 || matrix[0][j]==0)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(matrix[0][0]==0)
        {
            for(int j=1;j<n;j++)
                matrix[0][j]=0;
        }
        if(firstcol==true)
        {
            for(int i=0;i<m;i++)
            matrix[i][0]=0;
        }
    }
};
