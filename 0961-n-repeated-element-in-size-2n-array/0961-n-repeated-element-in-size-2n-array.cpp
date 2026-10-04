class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int>s;
        for(int c:nums){
            if(s.count(c)!=0){return c;}
            s.insert(c);
        }
        return 0;
    }
};