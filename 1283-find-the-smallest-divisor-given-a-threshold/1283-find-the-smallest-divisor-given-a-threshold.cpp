class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        int k;
        while(low<=high){
            int mid=low+(high-low)/2;
            int div;
            long long sum=0;
            for(int i=0;i<nums.size();i++){
                div=(nums[i]+mid-1)/mid;
                sum+=div;
            }
            if(sum<=threshold){
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