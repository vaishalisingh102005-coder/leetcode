class Solution {
public:
    void dfs(vector<vector<int>>&grid,int row,int col,int n,int m){
        if(row<0 || row>=n || col<0 || col>=m || grid[row][col]==0) return;
        grid[row][col]=0;
        dfs(grid,row+1,col,n,m);
        dfs(grid,row-1,col,n,m);
        dfs(grid,row,col+1,n,m);
        dfs(grid,row,col-1,n,m);

    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        //vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(grid[i][0]==1) dfs(grid,i,0,n,m);
            if(grid[i][m-1]==1) dfs(grid,i,m-1,n,m);
        }
        for(int i=0;i<m;i++){
            if(grid[0][i]==1) dfs(grid,0,i,n,m);
            if(grid[n-1][i]==1) dfs(grid,n-1,i,n,m);
        }
        int cnt=0;
        for(int row=0;row<n;row++){
            for(int col=0;col<m;col++){
                if( grid[row][col]==1 ){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};