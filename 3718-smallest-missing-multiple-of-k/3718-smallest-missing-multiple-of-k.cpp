class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int>mp(nums.begin(),nums.end());
        int found=0;
        int m=k;
        while(found==0){
            if(mp.count(k)){
                k+=m;
            }
            else{
                //return k;
                found=k;
                break;
            }
        }
        return found;
        

    }
};