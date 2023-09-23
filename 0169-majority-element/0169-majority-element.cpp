class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0,cnt=0;
        
        sort(nums.begin(),nums.end());
        
        if(nums.size()==1){
            ans=nums[0];
        }
        else{
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                cnt++;
            }
            else{
                cnt=0;
            }
            if(cnt>=nums.size()/2){
                ans=nums[i];
                break;
            }
        }
        }
        return ans;
        
    }
};