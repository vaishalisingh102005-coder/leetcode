class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        vector<int>n;
        int x=s.size();
        for(char c:s){
            n.push_back(c-'0');
        }
        //sort(n.begin(),n.end());
        for(int i=1;i<x;i++){
            if(abs(n[i]-n[i-1])>2){
                return false;
            }
        }
        return true;
    }
};