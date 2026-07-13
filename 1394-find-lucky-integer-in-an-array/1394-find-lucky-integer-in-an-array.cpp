class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int c=arr[i];
            int count=0;
            for(int j=0;j<arr.size();j++){
                if(arr[j]==c){count++;}
            }
            if(count==c){ans.push_back(c);}
        }
        if(!ans.empty()){return *max_element(ans.begin(),ans.end());}
        return -1;
    }
};