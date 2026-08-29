class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int k;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hr=0;
            for(int i=0;i<piles.size();i++){
                int reqhr=(piles[i]+mid-1)/mid;
                hr+=reqhr;
            }
            if(hr<=h){
                k=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return k;
    }
};