class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest=nums[0]+nums[1]+nums[n-1];
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
            int sum=0;
            while(l<r){
                sum=nums[i]+nums[l]+nums[r];
                if(abs(sum-target)<abs(closest-target)){
                    closest=sum;
                    }
                if(sum>target){r--;}
                else {l++;}
            }
        }
        return closest;
    }
};