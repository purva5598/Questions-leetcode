class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]){
                    if(j<nums2.size()-1){
                        for(int k=j+1;k<nums2.size();k++){
                            if(nums2[j]<nums2[k]){
                                ans.push_back(nums2[k]);
                                break;
                            }
                            else if(k==nums2.size()-1){
                                ans.push_back(-1);
                            }
                        }
                    }
                    else{
                        ans.push_back(-1);
                    }
                }
            }
        }
        return ans;
    }
};