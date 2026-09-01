class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=1;
        int high=nums.size()-2;
        int n=nums.size();
        if(nums.size()==1){
            return nums[0];
        }
        if(nums[1]!=nums[0]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        while(low<=high){
            int mid=low+(high-low)/2;
            if((nums[mid]!=nums[mid-1]) && (nums[mid]!=nums[mid+1])){
                return nums[mid];
            }
            if(nums[mid]==nums[mid-1]){
                if((mid-1)%2==0){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
            else if(nums[mid]==nums[mid+1]){
                if(mid%2==0){
                    low=mid;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};