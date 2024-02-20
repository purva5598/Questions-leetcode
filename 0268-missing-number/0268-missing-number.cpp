// #include<bits/stdc++.h>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        if(nums.size()==1&& nums[0]==1){
            ans=0;
        }
        else if(nums[0]!=0){
            ans=0;
        }
        else{
        for(int i=0;i<nums.size();i++){
            if(i==nums.size()-1){
                ans=nums[i]+1;
                break;
            }
            
            if(nums[i]+1!=nums[i+1]){
                ans=nums[i]+1;
                break;
            }
        }}
        return ans;
    }
};