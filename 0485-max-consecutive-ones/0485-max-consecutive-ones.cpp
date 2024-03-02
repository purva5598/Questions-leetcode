class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        set<int> s;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
            }
            else{
                s.insert(cnt);
                cnt=0;
            }
            s.insert(cnt);
        }
        return *max_element(s.begin(),s.end());
    }
};