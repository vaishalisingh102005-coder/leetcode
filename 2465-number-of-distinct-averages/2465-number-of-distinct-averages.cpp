class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        vector<double>avg;
        sort(nums.begin(),nums.end());
        double av;
        int j=nums.size()-1;
        for(int i=0;i<j;i++,j--){
            {
            av=(nums[i]+nums[j])/2.0;
            avg.push_back(av);
             
            }
        }
        sort(avg.begin(), avg.end());
        avg.erase(unique(avg.begin(),avg.end()),avg.end());
        
        return avg.size();
    }
};