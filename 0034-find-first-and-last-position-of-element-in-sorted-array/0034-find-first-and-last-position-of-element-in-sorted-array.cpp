class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        vector<int> sol;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        if(ans.empty()){
            sol.push_back(-1);
            sol.push_back(-1);
        }
        else{
            sol.push_back(ans[0]);
            sol.push_back(ans[ans.size()-1]);
        }
        return sol;
        
    }
};