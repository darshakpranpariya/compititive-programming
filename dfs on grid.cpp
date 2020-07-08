//dfs on grid
//Leetcode problem link:- https://leetcode.com/problems/island-perimeter/submissions/
class Solution {
public:
    int dfs(vector<vector<int>> &grid,int i,int j){
        if(i<0 || i>=grid.size() || j<0 || j>=grid[0].size() || grid[i][j]==0){
            return 1;
        }
        
        if(grid[i][j]==-1){
            return 0;
        }
        
        int count=0;
        grid[i][j]=-1;
        
        count+=dfs(grid,i-1,j);
        count+=dfs(grid,i+1,j);
        count+=dfs(grid,i,j-1);
        count+=dfs(grid,i,j+1);
        
        return count;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    return dfs(grid,i,j);
                }
            }
        }
        return 0;
    }
};
