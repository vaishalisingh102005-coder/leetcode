class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumleft=0,sumright;
        int total=accumulate(nums.begin(), nums.end(), 0);
        for(int i=0;i<nums.size();i++){
           
            sumright=total-sumleft-nums[i];
            if(sumright==sumleft){return i;}
            sumleft+=nums[i];
        }
        return -1;
        

    }
};