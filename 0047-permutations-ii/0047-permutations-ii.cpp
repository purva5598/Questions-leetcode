class Solution {
public:
    int n;  
    set<vector<int>> ans;
    void f(int i, vector<int>& nums){
        if (i==n){// reach the end of nums
            ans.insert(nums);
            return ;
        } 
        f(i+1, nums);
        for (int j=i+1; j<n; j++){
            if (nums[i]!=nums[j]){
                swap(nums[i], nums[j]);
                f(i+1, nums);
                swap(nums[i], nums[j]);
            } 
        }
    }    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        n=nums.size();
        sort(nums.begin(), nums.end());
        f(0, nums);
        return vector<vector<int>>(ans.begin(), ans.end());
    }
};