class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<double> merged;
        for(int i=0;i<nums1.size();i++){
            merged.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            merged.push_back(nums2[i]);
        }
        sort(merged.begin(),merged.end());
        if(merged.size()%2!=0){
            return merged[merged.size()/2];
        }
        return (merged[merged.size()/2]+merged[merged.size()/2 - 1]) / 2;
    }
};