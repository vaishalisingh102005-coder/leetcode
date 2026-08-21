class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int maxscore=0;
        int j=tokens.size()-1;
        int i=0;
        int score=0;
        while(i<=j){
            if(tokens[i]<=power){
                score++;
                power-=tokens[i];
                i++;
                maxscore=max(maxscore,score);
            }
            else if(score>=1 ){
                score--;
                power+=tokens[j];
                j--;
            }
            else{
                return maxscore;
            }


        }
        return maxscore;
    }
};