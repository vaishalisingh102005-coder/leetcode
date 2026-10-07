class Solution {
public:
    int passwordStrength(string password) {
        int num=0;
        set<char>s;
        for(char c:password){
            s.insert(c);
        }
        int f1=0,f2=0,f3=0,f4=0;
        for(char c:s){
            if(c>='a' && c<='z'){
                    num+=1;
            }
            else if(c>='A' && c<='Z'){
                
                    num+=2;
                 
            }
            else if(c>='0' && c<='9'){
              
                    num+=3;
                
            }
            else{
                
                    num+=5;
                
            }
        }
        return num;
    }
};