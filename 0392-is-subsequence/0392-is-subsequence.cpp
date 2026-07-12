class Solution {
public:
    bool isSubsequence(string s, string t) {
        int count=0;
        int found=0;
        for(int i=0;i<s.size();i++){
            for(int j=found;j<t.size();j++){
                if(s[i]==t[j]){
                    count++;
                    found=j+1;
                    break;}
            }
        }
        return (count==s.size());
    }
};