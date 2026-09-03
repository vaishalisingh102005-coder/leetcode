class Solution {
public:
    string removeOuterParentheses(string s) {
        // s.erase(0,1);
        // s.erase(s.size()-1,1);
        // for(int i=1;i<s.size()-1;i++){
        //     if((s[i]=='(' && s[i+1]=='(')||(s[i]==')' && s[i+1]==')')){
        //         s.erase(i,1);
        //     }
        //     else{
        //         i++;
        //     }
        // }
        int count=0;
        string ans="";
        for(char c:s){
            if(c==')'){
                count--;
            }
            if(count>0){
                ans+=c;
            }
            if(c=='('){
                count++;
            }
        }
        return ans;
    }
};