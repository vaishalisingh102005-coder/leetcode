class Solution {
public:
    bool isValid(string s) {
        stack<int>v;
        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                v.push(c);
            }
            else { 
                if(v.empty()){return  false;}
                if((c==')' && v.top()!='(') || (c==']' && v.top()!='[') || (c=='}' && v.top()!='{')){
                return false;}
                v.pop();
            }
        }
        return v.empty();
    }
};