class Solution {
public:
    long long dividePlayers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int right=nums.size()-1;
        int left=0;
        int k=nums[right]+nums[left];
        long long prod=0;
        int c=0;
        while(right>left){
            int sum=nums[right]+nums[left];
            if(sum==k){
                prod+=(nums[left]*nums[right]);
                c++;
            }
            right--;
            left++;
            
        }
        if(c==(n/2)){
            return prod;
        }
        else{
            return -1;
        }
    }
};