class Solution {
public:
    bool dfs(int source,int destination,vector<vector<int>>&adj,vector<bool>&visited){
        visited[source]=1;
        if(source==destination) return true;
        for(int vertex:adj[source]){
          if(!visited[vertex]) {
            if( dfs(vertex,destination,adj,visited)) return true;
          }
        }
        return false;
    }

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adj(n);
        for(auto& edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        vector<bool>visited(n,false);
        return dfs(source,destination,adj,visited);
    }
};