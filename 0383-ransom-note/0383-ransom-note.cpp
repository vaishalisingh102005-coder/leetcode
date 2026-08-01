class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c=0;
        for(int i=0;i<ransomNote.size();i++){
            for(int j=0;j<magazine.size();j++){
                if(ransomNote[i]==magazine[j]){
                    c++;
                    magazine[j] = '#';
                    break;
                }
            }
        }
        return c==ransomNote.size();
    }
};