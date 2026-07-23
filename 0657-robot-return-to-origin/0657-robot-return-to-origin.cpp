class Solution {
public:
    bool judgeCircle(string s) {
        int u=0,l=0,d=0,r=0;
        for(char c:s){
            if(c=='U') u++;
            else if(c=='L') l++;
            else if(c=='D') d++;
            else if(c=='R') r++;
        }
        return (l==r && u==d);
    }
};