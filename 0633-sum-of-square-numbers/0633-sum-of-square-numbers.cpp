class Solution {
public:
    bool judgeSquareSum(int c) {
        int s=0;
        long long l=sqrt(c);
        while(s<=l){
            long long sum=1LL * s * s + 1LL * l * l;
            if(sum==c){return true;}
            else if(sum>c){l--;}
            else if(sum<c){s++;}
        }
        return false;
    }
};