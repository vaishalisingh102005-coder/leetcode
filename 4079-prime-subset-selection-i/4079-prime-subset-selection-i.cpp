class Solution {
public:
    bool isprime(int n){
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;}
            return true;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int>ans;
        long long sm=0;
        for(int i=2;i<=n;i++){
            if(isprime(i)){
                sm+=i;
            
                if(sm<=s){
                    ans.push_back(i);
                }
                else{
                    break;
                }}
        }
        return ans;
    }
};