class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            int c=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]) c++;
            }
            if(c>(n/2)){return nums[i];}
        }
        return n;
    }
};