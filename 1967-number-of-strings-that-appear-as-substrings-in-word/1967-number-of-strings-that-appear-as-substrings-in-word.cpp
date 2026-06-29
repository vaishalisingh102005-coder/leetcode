class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int ans=0;
        for(int i=0;i<patterns.size();i++){
            int n=patterns[i].size();
           
            for(int j=0;j+n<=word.size();j++){
                int flag=0;
                for(int k=0;k<n;k++){
                if(patterns[i][k]!=word[j+k]){
                    flag=1;
                    break;}}
            
            if (flag==0) {
                ans++;
                break;}}
        }
        return ans;
    }
};