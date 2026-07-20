class Solution {
public:
    bool checkTwoChessboards(string c1, string c2) {
        int m1=1,m2=1;
        if((int(c1[0])%2!=0 && int(c1[1])%2==0)||(int(c1[0]%2==0 && int(c1[1])%2!=0))){m1=0;}
        
        if((int(c2[0])%2!=0 && int(c2[1])%2==0)||(int(c2[0]%2==0 && int(c2[1])%2!=0))){m2=0;}
        return m1==m2;

    }
};