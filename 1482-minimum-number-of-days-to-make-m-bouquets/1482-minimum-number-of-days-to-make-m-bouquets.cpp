class Solution {
public:
    bool ispossible(vector<int>&bloomDay,int m,int k,int day){
        int count=0;
        int no=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
            }
            else{
                no+=(count/k);
                count=0;
            }
        }
        no+=(count/k);
        if(no>=m){
            return true;
        }
        return false;

        }

    //TLE AA GYA BRO (O(MAX-MIN+1)*N)- BINARY HI LAGA


    int minDays(vector<int>& bloomDay, int m, int k) {
        // if((m*k)>bloomDay.size()){
        //     return -1;
        // }
        
        //brute force
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int ans=-1;
        // for(int i=mini;i<=maxi;i++){
        //     if(ispossible(bloomDay,m,k,i)){
        //         return i;
        //     }
        // }


        while(low<=high){
            int mid=low+(high-low)/2;
            if(ispossible(bloomDay,m,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }}
        return ans;
        
        //return -1;
        
    }
};