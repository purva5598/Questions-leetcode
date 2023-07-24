class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        stack < int> s;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            s.push(nums[i]);
        for(int j=i+1;j<nums.size();j++){
                if(s.top()+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    break;
            }    }
        }
        return v;
    }
};