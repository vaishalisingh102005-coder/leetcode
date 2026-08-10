class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int top=0,down=n-1,left=0,right=n-1;
        vector<vector<int>>matrix(n,vector<int>(n));
        if(n==0){
            return {};
        }
        int counter=1;
        while(left<=right && top<=down){
            for(int i=left;i<=right;i++){
                matrix[top][i]=counter++;
                
            }
            top++;
            for(int i=top;i<=down;i++){
                matrix[i][right]=counter++;
                
            }
            right--;
            if(top<=down){
                for(int i=right;i>=left;i--){
                    matrix[down][i]=counter++;}
                
            
                down--;}
            if(left<=right){
                for(int i=down;i>=top;i--){
                    matrix[i][left]=counter++;}
            
            left++;}}
        return matrix;
    }
};
    