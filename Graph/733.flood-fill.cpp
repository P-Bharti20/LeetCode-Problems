/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int dr[] ={-1,1,0,0};
        int dc[]={0,0,1,-1};

        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        q.push({sr,sc});
        int val = image[sr][sc];
        image[sr][sc]=color;
        visited[sr][sc]=1;
        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int nr = r+dr[i];
                int nc = c+dc[i];

                if(nr>=0 && nr<n && nc>=0 && nc<m && image[nr][nc]==val && !visited[nr][nc]){
                    image[nr][nc]=color;
                    visited[nr][nc]=1;
                    q.push({nr,nc});
                }
            }
        }
        return image;
    }
};
// @lc code=end

