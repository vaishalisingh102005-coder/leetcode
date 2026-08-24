class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int c=0;
        int right=k-1;
        int left=0;
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        while(right<arr.size()){
            if((sum/k)>=threshold){
                c++;
            }
            if(right+1<arr.size()){
                sum=sum+arr[right+1]-arr[left];
                left++;
                right++;}
            else {
                break;
            }
            
        }
        return c;
    }
};