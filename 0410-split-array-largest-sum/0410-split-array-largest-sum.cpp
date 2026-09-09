class Solution {
public:
    bool ispossible(vector<int>&v,int mid,int k){
        int no=1;
        int sum=0;
        for(int i=0;i<v.size();i++){
            if(sum+v[i]<=mid){
                sum+=v[i];
            }
            else{
                no++;
                sum=v[i];
            }
        }
        return no<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(ispossible(nums,mid,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};