class Solution {
public:
    int digitFrequencyScore(int n) {
        long long int sum=0;
        while(n!=0){
            int ld=n%10;
            sum+=ld;
            n/=10;
        }
        // vector<int>freq;
        // string s = to_string(n);
        // for(int i=0;i<s.size();i++){
        //     int c=1;
        //     for(int j=i+1;j<s.size();j++){
        //         if(s[i]==s[j]) c++;
        //     }
        //     int num = s[i]-'0';
        //     sum+=(c*num);
        // }
        return sum;}
};