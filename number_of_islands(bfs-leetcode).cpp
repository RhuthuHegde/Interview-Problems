// Given an m x n 2D binary grid grid which represents a map of '1's (land)
// and '0's (water), return the number of islands.
// An island is surrounded by water and is formed by connecting adjacent lands horizontally or vertically.
// You may assume all four edges of the grid are all surrounded by water.
// Example 1:
//
// Input: grid = [
//   ["1","1","1","1","0"],
//   ["1","1","0","1","0"],
//   ["1","1","0","0","0"],
//   ["0","0","0","0","0"]
// ]
// Output: 1
// Example 2:
//
// Input: grid = [
//   ["1","1","0","0","0"],
//   ["1","1","0","0","0"],
//   ["0","0","1","0","0"],
//   ["0","0","0","1","1"]
// ]
// Output: 3
//
//
// Constraints:
//
// m == grid.length
// n == grid[i].length
// 1 <= m, n <= 300
// grid[i][j] is '0' or '1'.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void bfs(vector<vector<char>>& grid,queue<pair<int,int>> &q,int m,int n)
    { while(q.empty()==false)
        {
        pair<int,int>val=q.front();
        q.pop();
        int x=val.first;
        int y=val.second;

        if(x-1>=0 && grid[x-1][y]=='1')
        {
            q.push({x-1,y});
            grid[x-1][y]='2';
        }
        if(x+1<m && grid[x+1][y]=='1')
        {
            q.push({x+1,y});
            grid[x+1][y]='2';
        }
        if(y-1>=0 && grid[x][y-1]=='1')
        {
            q.push({x,y-1});
            grid[x][y-1]='2';
        }
        if(y+1<n && grid[x][y+1]=='1')
        {
            q.push({x,y+1});
            grid[x][y+1]='2';
        }
        }
    }
    int numIslands(vector<vector<char>>& grid) {

        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                 cout<<grid[i][j]<<" ";
            }
               cout<<"\n";
        }
        queue<pair<int,int>>q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
        if(grid[i][j]=='1')
        {
            q.push({i,j});
            count++;
            grid[i][j]='2';
            bfs(grid,q,m,n);
        }
        }
        }

        return count;
    }
};
