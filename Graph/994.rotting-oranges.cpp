/*
 * @lc app=leetcode id=994 lang=cpp
 *
 * [994] Rotting Oranges
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int dr[] = {-1,1,0,0};
        int dc[] = {0,0,1,-1};
        int n = grid.size();
        int m = grid[0].size();

        int fresh = 0;
        queue<pair<int,int>> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        
        int ttime = 0;
        while(!q.empty() && fresh>0){
            int size = q.size();
            ttime++;
            for(int i=0;i<size;i++){
                auto [r,c] = q.front();
                q.pop();
                
                for(int k=0;k<4;k++){
                    int newr = r +dr[k];
                    int newc = c +dc[k];
                    if(newr>=0 && newr<n && newc>=0 && newc<m && grid[newr][newc]==1){
                        grid[newr][newc]=2;
                        q.push({newr,newc});
                        fresh--;
                    }
                }
            } 
        }
        
        return fresh==0 ? ttime : -1;
    }
};
// @lc code=end

