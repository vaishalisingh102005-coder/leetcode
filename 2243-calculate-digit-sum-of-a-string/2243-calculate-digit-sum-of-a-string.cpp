class Solution {
public:
    string digitSum(string s, int k) {
        int size=s.size();
        
        while(size>k){
            string ans="";
            for(int i=0;i<size;i+=k){
                int sum=0;
                for(int j=i;j<min(i+k,size);j++){
                    sum+=s[j]-'0';
                
            }
            ans+=to_string(sum);
        }
        s=ans;
        size=s.size();

    }
    return s;}
};