class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int ans=INT_MAX;
        for(int i=1;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1]&&nums[i]>nums[i-1]){
                cout<<i<<endl;
                ans=i;
                cout<<ans<<endl;
                break;
            }
        }
        cout<<ans<<endl;
        if(ans==INT_MAX){
            if(nums.size()==1){
                ans=0;
            }
            else if(nums[0]>nums[1]){
                ans=0;
            }
            else if(nums[nums.size()-1]>nums[nums.size()-2]){
                ans=nums.size()-1;
            }
        }
        
        return ans;
    }
};