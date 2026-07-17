class Solution {
public:
    int minimumSum(vector<int>& nums) {
        int min=5678999999999999999;
        int c=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]<nums[j]){
                    for(int k=j+1;k<nums.size();k++){
                        if(nums[k]<nums[j]){
                            int x=nums[i]+nums[j]+nums[k];
                            c++;
                            if(x<min){min=x;}
                        }
                }}
            }
        }
        if(c==0){return -1;}
        return min;
    }
};