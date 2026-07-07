class Solution {
public:
    int findMaxK(vector<int>& nums) {
        int max=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){
                for(int j=0;j<nums.size();j++){
                    if(nums[i]+nums[j]==0){
                        max=nums[i];
                    }
                }
            }
        }
        return max;
    }
};