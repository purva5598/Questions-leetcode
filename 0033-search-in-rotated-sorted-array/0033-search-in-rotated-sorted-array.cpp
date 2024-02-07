class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans=i;
            }
        }
        if(ans==INT_MAX){
            ans=-1;
        }
        return ans;
        
    }
};