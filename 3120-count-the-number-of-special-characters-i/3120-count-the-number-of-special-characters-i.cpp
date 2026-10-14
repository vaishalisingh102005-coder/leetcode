class Solution {
public:
    int numberOfSpecialChars(string word) {
        set<char>upper;
        set<char>lower;
        for(char c:word){
            if(islower(c)){
                lower.insert(c);}
            if(isupper(c)){
                upper.insert(tolower(c));}
        }
        int count=0;
        for(char c: lower){
            if(upper.count(c)){
                count++;
            }
        }
        return count ;
    }
};