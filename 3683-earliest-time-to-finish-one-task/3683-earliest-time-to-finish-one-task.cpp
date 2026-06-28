class Solution {
public:
    int earliestTime(vector<vector<int>>& nums) {
        int min=100000;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=0;j<2;j++){
                sum+=nums[i][j];}
            
            if(sum<min) min=sum;

        }
        return min;
    }
};