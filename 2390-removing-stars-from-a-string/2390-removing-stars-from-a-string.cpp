class Solution {
public:
    string removeStars(string s) {
        vector<char>v;
        for(char c:s){
            if(c=='*'){v.pop_back();}
            else{
                v.push_back(c);
            }
        }
        string ans(v.begin(),v.end());
        return ans;}
};