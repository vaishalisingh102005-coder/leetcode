class Solution {
public:
    int numberOfMatches(int n) {
        int adv=n;
        int sum=0;
        while(adv!=1){
            int match;
            if(adv%2==0){
                sum+=(adv/2);
                adv/=2;
            }
            else{
                sum+=(adv-1)/2;
                adv=(adv-((adv-1)/2));
            }
        }
        return sum;
    }
};