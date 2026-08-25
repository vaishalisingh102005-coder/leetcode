class Solution {
public:
    int findFinalValue(vector<int>& nums, int k) {
        unordered_set<int>st(nums.begin(),nums.end());
        int found=-1;
        while(found==-1){
            if(st.count(k)){
                k=k*2;
            }
            else{
                found=k;
            }
        }
        return found;
    }
};