class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        int x=left;
        while(x<=right){
            int n = to_string(x).length();
            int c=0;
            int m=x;
            //if(n==1){ans.push(x);}
            while(m!=0){
                int ld=m%10;
                if(ld!=0){
                    if(x%ld==0){c++;}}
                m/=10;
            }
            if(c==n) ans.push_back(x);
            x++;
        }
        return ans;
    }
};