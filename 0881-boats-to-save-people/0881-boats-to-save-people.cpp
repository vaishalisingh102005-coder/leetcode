class Solution {
public:
    int numRescueBoats(vector<int>& people, int target) {
        sort(people.begin(),people.end());
        int l=0;
        int r=people.size()-1;
        int res=0;
        while(l<=r){
            int sum=people[l]+people[r];
            if(sum<=target){
                res++;
                l++;
                r--;
            }
            if(sum>target){
                res++;
                r--;
            }
        }
        return res;
    }
};