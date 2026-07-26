class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size()-1;
        int m1=nums[s]*nums[s-1]*nums[s-2];
        int m2=nums[0]*nums[1]*nums[s];
        return max(m1,m2);
    }
};