class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        if(nums.size()<=2){
            ans=-1;
        }
        else{
            ans=nums[1];
        }
        return ans;
    }
};