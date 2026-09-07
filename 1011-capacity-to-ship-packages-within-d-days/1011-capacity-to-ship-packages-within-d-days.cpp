class Solution {
public:
    int dayss(vector<int>&w,int cap){
        int days=1,load=0;
        for(int i=0;i<w.size();i++){
            if((load+w[i])>cap){
                days++;
                load=w[i];
            }
            else{
                load+=w[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(), weights.end(), 0);
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int reqdays=dayss(weights,mid);
            if(reqdays<=days){
                //ans=reqdays;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};