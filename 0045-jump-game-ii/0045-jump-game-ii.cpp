class Solution {
public:
    int jump(vector<int>& nums) {
        int jump=0, idx=nums[0];
        if(nums.size()==1){
            return 0;
        }
        set<int> maxIdx;
        for(int i=0;i<nums.size();i++){
            if(idx<i+nums[i]){  
                maxIdx.insert(i+nums[i]);
            }
            if(idx>=nums.size()-1){
               break;
            }
            if(i>=idx){
                jump++;
                idx=*max_element(maxIdx.begin(),maxIdx.end());
            }
            
        }
        return jump+1;
    }
};