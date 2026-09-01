class Solution {
public:
    int findMin(vector<int>& nums) {
        // return *min_element(nums.begin(),nums.end());
        int low=0;
        int high=nums.size()-1;
        int ans=INT_MAX;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[low]<=nums[mid]){
                ans=min(nums[low],ans);
                low=mid+1;
            }
            else{
                ans=min(nums[mid+1],ans);
                high=mid;

            }
        }
        return ans;
    }
};