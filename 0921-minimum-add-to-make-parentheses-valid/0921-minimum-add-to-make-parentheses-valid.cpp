class Solution {
public:
    int minAddToMakeValid(string s) {
        int c=0;
        int open=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else{
                if(open>0){
                    open--;
                }
                else{
                    c++;
                }
            }
        }
        return c+open;
    }
};