class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                ans=i;
                break;
            }
        }
        if(ans==INT_MAX){
            ans=nums.size();
        }
        return ans;
    }
};