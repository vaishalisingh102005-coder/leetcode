class Solution {
public:
    int maxProduct(int n) {
        string s=to_string(n);
        sort(s.begin(),s.end());
        int l=s.size();
        //int n1=stoi(s[l-1]); //stoi mein string jaata h char nhi
        int n1=s[l-1]-'0';
        int n2=s[l-2]-'0';
        return n1*n2;
    }
};