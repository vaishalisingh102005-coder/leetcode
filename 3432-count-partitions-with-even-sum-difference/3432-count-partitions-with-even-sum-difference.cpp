class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int c=0;
        for(int j=0;j<nums.size()-1;j++){
            int left=0;
            int right=0;
            for(int i=0;i<=j;i++){
                left+=nums[i];
            }
            for(int k=j+1;k<nums.size();k++){
                right+=nums[k];
            }
            int diff=left-right;
            if(diff%2==0){c++;}
    }
        return c;}
};