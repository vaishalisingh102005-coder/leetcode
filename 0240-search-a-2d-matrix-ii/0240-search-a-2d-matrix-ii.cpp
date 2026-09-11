class Solution {
public:
    // bool binarySearch(vector<int>matrix,int target){
    //     int low=0;
    //     int n=matrix.size();
    //     int high=matrix.size()-1;
    //     while(low<=high){
    //         int mid=low+(high-low)/2;
    //         if(matrix[mid]==target){
    //             return 1;
    //         }
    //         else if(matrix[mid]>target){
    //             high=mid-1;

    //         }
    //         else{
    //             low=mid+1;
    //         }
    //     }
    //     return 0;

    // }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=0,col=matrix[0].size()-1;
        while(row<matrix.size() && col>=0){
            if(matrix[row][col]==target){
                return 1;
            }
            else if (matrix[row][col]>target){
                col--;
            }
            else{
                row++;
            }
        }
        return 0;
    }
};