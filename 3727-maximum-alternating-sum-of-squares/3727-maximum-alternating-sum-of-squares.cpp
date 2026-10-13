class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
        vector<int>x;
        for(int i=0;i<n;i++){
            x.push_back(abs(nums[i]));
        }
        sort(x.begin(),x.end());
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                sum-=(x[i]*x[i]);
            }
            for(int i=n/2;i<n;i++){
                sum+=(x[i]*x[i]);
            }
            return sum;

        }
        if(n%2!=0){
            for(int i=0;i<n/2;i++){
                sum-=(x[i]*x[i]);
            }
            for(int i=(n-1)/2;i<n;i++){
                sum+=(x[i]*x[i]);
            }
            return sum;

        }
        return sum;
    }
};