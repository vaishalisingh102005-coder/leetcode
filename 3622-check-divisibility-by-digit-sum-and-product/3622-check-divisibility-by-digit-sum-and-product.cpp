class Solution {
public:
    bool checkDivisibility(int n) {
        int m=n;
        int sum=0;
        int prod=1;
        while(m!=0){
            int ld=m%10;
            sum+=ld;
            prod*=ld;
            m/=10;
        }
        if(n%(sum+prod)==0){
            return true;
        }
        return false;
    }
};