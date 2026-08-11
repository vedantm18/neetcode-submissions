class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int>ans; 
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
               ans.push_back(nums1[i]);
               i++;
            }else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        if(i<nums1.size()){
           while(i<nums1.size()){
            ans.push_back(nums1[i]);
            i++;
           }
        }
        if(j<nums2.size()){
            while(j<nums2.size()){
                ans.push_back(nums2[j]);
                j++;
            }
        }
        double x=0;
        int size=ans.size();
        if(size%2!=0){
            x=(ans[size/2]);
        }else{
        x=(ans[size/2]+ans[(size/2)-1])/2.0;
    }
    return x;
    }
};
