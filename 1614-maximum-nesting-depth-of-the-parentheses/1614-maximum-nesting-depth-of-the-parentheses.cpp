class Solution {
public:
    int maxDepth(string s) {
        stack<string>v;
        int currmax=0;
        int count=0;
        for (char c: s){
            if(c=='('){
                count++;
                currmax=max(currmax,count);
                //v.push_back(c);
            }
            else if(c==')'){
                count--;
            }
        }
        return currmax;
    }
};