class Solution {
public:
    bool canJump(vector<int>& nums) {
        bool ans=false;
        int r=nums.size()-1;
        int i=nums.size()-1;
        
        
        while(i>=0){
            if(r<=i+nums[i]){
               r=i;
               i--;
            }
            else{
                i--;
            }   
        }
        
        if(r==0){
           ans=true;
        }
        return ans;
        
    }
};