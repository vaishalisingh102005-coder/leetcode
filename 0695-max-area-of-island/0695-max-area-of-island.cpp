class Solution {
public:
    int area=0;
    void dfs(int i,int j,int n, int m,vector<vector<int>>& grid,int& curr){
        if(i<0 || i>=n || j<0 || j>=m || grid[i][j]==0) return ;
        grid[i][j]=0;
        curr+=1;
        dfs(i+1,j,n,m,grid,curr);
        dfs(i-1,j,n,m,grid,curr);
        dfs(i,j+1,n,m,grid,curr);
        dfs(i,j-1,n,m,grid,curr);
        //area=max(curr,area);
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( grid[i][j]==1){
                    int curr=0;
                    dfs(i,j,n,m,grid,curr);
                    area=max(curr,area);
                }
            }
        }
        return area;
    }
};