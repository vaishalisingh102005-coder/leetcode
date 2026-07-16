class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int>ans;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i++]);
            }
            else{
                ans.push_back(nums2[j++]);
            }
        }
        while(i<nums1.size()){ans.push_back(nums1[i++]);}
        while(j<nums2.size()){ans.push_back(nums2[j++]);}
        int size=ans.size();
        double med=0;
        if(size%2==0){
            med=(ans[(size/2)-1]+ans[size/2])/2.0;
        }
        else{
            med=ans[size/2];
        }
        return med;

    }
};