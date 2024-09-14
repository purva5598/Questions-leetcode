class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int cnt=0;
        int ans=0;
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        int maxx=temp[nums.size()-1];
       for(int i=0;i<nums.size();i++){
           if(nums[i]==maxx){
               cnt++;
           }else {
               ans=max(ans,cnt);
               cnt=0;
           }
       }
        ans=max(ans,cnt);
        return ans;
    }
};