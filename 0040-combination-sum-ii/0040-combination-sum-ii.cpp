class Solution {
public:
     void f(vector<int> &candidates, int i, int target, vector<vector<int>> &ans, vector<int> &ds){
        // if(i==candidates.size()){
            if(target==0){
                ans.push_back(ds);
            // }
            return;
        }
        for (int j = i; j < candidates.size(); j++) {
            if (j > i && candidates[j] == candidates[j - 1]) continue; // skip duplicates
            if (candidates[j] > target) break; // no need to continue if the candidate is greater than the target
            ds.push_back(candidates[j]);
            f(candidates, j + 1, target - candidates[j], ans, ds); // move to the next index
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        f(candidates, 0,target,  ans,ds);
        // vector<vector<int>> sol;
        // for(auto i: ans){
        //     sol.push_back(i);
        // }
        return ans;
    }
};