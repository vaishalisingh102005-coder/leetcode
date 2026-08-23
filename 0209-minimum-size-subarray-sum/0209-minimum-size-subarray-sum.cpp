class Solution {
public:
    int minSubArrayLen(int k, vector<int>& nums) {
        int l=0;
        int r=0;
        int minlength=INT_MAX;
        int sum=0;
        while(r<nums.size()){
            if(sum<k){
                sum+=nums[r];
                r++;
            }
            while(sum>=k){
                minlength=min(minlength,r-l);
                sum-=nums[l];
                //sum+=nums[r];
                l++;
                //r++;
                
            }
            
            }
            if(minlength==INT_MAX){
                return 0;
            
        }
        return minlength;
    }
};