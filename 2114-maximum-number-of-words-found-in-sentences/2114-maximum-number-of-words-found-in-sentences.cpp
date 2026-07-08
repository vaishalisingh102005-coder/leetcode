class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int max=0;
        for(int i=0;i<sentences.size();i++){
            int count=1;
            for(char c : sentences[i]){
                if(c==' '){
                    count++;
                }
            }
            if(count>max){max=count;}
        }
        return max;
    }
};