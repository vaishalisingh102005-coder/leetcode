class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int c=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
           if(nums[i]==c){
                c++;}
        }
        return c;
    }
};