class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans;
        if(nums.size()==1){
            ans=nums[0];
        }
        else{
            for(int i=0;i<=nums.size()-1;i=i+2){
                if(nums[i]!=nums[i+1]){
                    ans=nums[i];
                    break;
                }
            }
        }
        
        return ans;
    }
};