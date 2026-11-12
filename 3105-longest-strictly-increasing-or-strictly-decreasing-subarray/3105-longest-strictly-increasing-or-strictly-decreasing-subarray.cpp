class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int lon=1;
        int inc=1;
        int dec=1;
        for(int i=0;i<nums.size()-1;i++){
            int curr;
            if(nums[i]>nums[i+1]){
                dec++;
                inc=1;
            }
            else if(nums[i]<nums[i+1]){
                inc++;
                dec=1;
            }
            else{
                inc=1;
                dec=1;
            }
            curr=max(inc,dec);
            lon=max(lon,curr);

        }
        return lon;
    }
};