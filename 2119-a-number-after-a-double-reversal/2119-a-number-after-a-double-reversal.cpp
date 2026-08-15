class Solution {
public:
    int rev(int x){
        int revn=0;
        while(x!=0){
            int ld=x%10;
            x/=10;
            revn=((revn*10)+ld);

        }
        return revn;
    }
    bool isSameAfterReversals(int num) {
        int r1=rev(num);
        int r2=rev(r1);
        return r2==num;
        
        
    }
};