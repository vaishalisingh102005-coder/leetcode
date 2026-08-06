class Solution {
public:
    int prod(int x){
        int pro=1;
        while(x!=0){
            int ld=x%10;
            pro*=ld;
            x/=10;}
        return pro;
    }
    int smallestNumber(int n, int t) {
        int c=0;
        while(c==0){
            if(prod(n)%t==0){
                c=1;
                return n;
            }
            n++;
        }
        return n;
        
        
    }
};