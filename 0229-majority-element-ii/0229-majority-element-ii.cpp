class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=floor(n/3);
        vector<int> ans;
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        for (auto itr : s){
            if(count(nums.begin(),nums.end(),itr)>cnt){
                ans.push_back(itr);
            }
        }
        return ans;
    }
};