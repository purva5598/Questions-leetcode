class Solution {
    void  f(int idx,vector<int> &nums,set<vector<int>> &ans){
        if(idx==nums.size()){
            ans.insert(nums);
            return;
        }
       
        for (int j=idx; j<nums.size(); j++){
                swap(nums[idx], nums[j]);
                f(idx+1, nums,ans);
                swap(nums[idx], nums[j]);
        }
    }
    public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>> ans;
        f(0,nums,ans);
        
        return vector<vector<int>> (ans.begin(),ans.end());
    }
};