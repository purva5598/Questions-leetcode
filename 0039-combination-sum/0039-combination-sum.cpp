class Solution {
public:
    
    
    void f(vector<int> &candidates, int i, int target, vector<vector<int>> &ans, vector<int> &ds){
        if(i==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(candidates[i]<=target){
            ds.push_back(candidates[i]);
            // target-=candidates[i];
            f(candidates,i, target-candidates[i], ans,ds);
            ds.pop_back();
        }
        f(candidates, i+1, target,ans,ds);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ds;
        vector<vector<int>> ans;
        f(candidates, 0,target,  ans,ds);
        return ans;
    }
};