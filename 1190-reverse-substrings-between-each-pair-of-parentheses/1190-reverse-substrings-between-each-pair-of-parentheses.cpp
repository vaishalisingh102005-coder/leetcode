class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>v;
        for(char c:s){
            if(c!=')'){
                v.push(c);
            }
            else{
                string temp="";
                while(v.top()!='('){
                    temp+=v.top();
                    v.pop();
                }
                v.pop();
                for(char x:temp){
                    v.push(x);
                }
            }
        }
        string ans="";
        while(!v.empty()){
            ans+=v.top();
            v.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};