class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int max=nums[0];
        vector<int>prefix;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>max){max=nums[i];}
            int g=gcd(nums[i],max);
            prefix.push_back(g);
        }
        sort(prefix.begin(),prefix.end());
        int left=0;
        int right=prefix.size()-1;
        long long sum=0;
        while(left<right){
            int g=gcd(prefix[left],prefix[right]);
            sum+=g;
            left++;
            right--;
        }
        return sum;
    }
};