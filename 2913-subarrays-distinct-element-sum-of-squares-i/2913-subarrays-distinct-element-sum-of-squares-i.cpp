class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int c=0;
        for(int i=0;i<nums.size();i++){
            set<int>s;
            for(int j=i;j<nums.size();j++){
                s.insert(nums[j]);
                int x=s.size();
                c+=(x*x);
            }
        }
        return c;
    }
};