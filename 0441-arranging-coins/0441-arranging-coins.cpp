class Solution {
public:
    int arrangeCoins(int n) {
        long long c=0;
        if(n==1){return 1;}
        for(int i=1;i<=n;i++){
            c+=i;

            if(c>n){return i-1;}
        }
        return 0;
    }
};