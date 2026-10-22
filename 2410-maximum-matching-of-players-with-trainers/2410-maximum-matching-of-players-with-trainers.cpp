class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        int count=0;
        int n=players.size();
        int t=trainers.size();
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i=0,j=0;
        while(i<n && j<t){
            if(players[i]<=trainers[j]){
                count++;
                i++;
            }
            j++;
        }
    return count;}
};