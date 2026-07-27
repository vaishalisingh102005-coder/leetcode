class Solution {
public:
    int maxVowels(string s, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o'){
                sum++;
            }
        }
        int ans=sum;
        for(int i=k;i<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='u'||s[i]=='o'){
                sum++;
            }
            if(s[i-k]=='a'||s[i-k]=='e'||s[i-k]=='i'||s[i-k]=='u'||s[i-k]=='o'){
                sum--;
            }
            ans=max(sum,ans);
        }
        return ans;
    }
};