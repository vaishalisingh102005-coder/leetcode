class Solution {
public:
    int calPoints(vector<string>& op) {
        vector<int>ans;
        for(int i=0;i<op.size();i++){
            if(op[i]=="+"){
                int s=ans[ans.size()-1]+ans[ans.size()-2];
                ans.push_back(s);}
            else if(op[i]=="D"){
                ans.push_back(ans[ans.size()-1]*2);
            }
            else if(op[i]=="C"){
                ans.pop_back();
            }
            else{
                ans.push_back(stoi(op[i]));
            }
        }
        
        int sum=accumulate(ans.begin(),ans.end(),0);
        return sum;
    }
};