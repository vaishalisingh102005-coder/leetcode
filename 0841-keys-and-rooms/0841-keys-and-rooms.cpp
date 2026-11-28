class Solution {
public:
    void dfs(int i,vector<vector<int>>&rooms,vector<bool>&vis){
        vis[i]=1;
        for(int v:rooms[i]){
            if(!vis[v]) dfs(v,rooms,vis);
        }
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool>vis(rooms.size(),0);
        dfs(0,rooms,vis);
        for(int i=0;i<rooms.size();i++){
            if(!vis[i]) return false;
        }
        return true;
    }
};