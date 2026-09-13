class Solution {
public:
    int getLucky(string s, int k) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int x=(int)s[i]-'a'+1;
            while(x>0){
                sum+=x%10;
                x/=10;
            }
        }
        while(k!=1){
            int n=sum;
            sum=0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            k--;
        }
        return sum;

        
    }
};