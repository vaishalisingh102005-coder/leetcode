class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char>v;
        vector<char>p;
        for(char c:s){
            if(c=='#'){
                if (!v.empty())
                    v.pop_back();
                    }
            else{
                v.push_back(c);
            }
        }
        for(char m:t){
            if(m=='#'){
                if(!p.empty())
                    p.pop_back();
            }
            else{
                p.push_back(m);
            }
        }
        return v==p;
    }
};