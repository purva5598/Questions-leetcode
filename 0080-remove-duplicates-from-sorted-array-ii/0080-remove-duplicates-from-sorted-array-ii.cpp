class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=0;
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                k++;
            }
            else{
                k=0;
            }
            
            if(k>1){
                nums[i]=INT_MAX;
                cnt++;
            }
            else if(k!=1){
                k=0;
            }
        }
        cnt=nums.size()-cnt;
        sort(nums.begin(),nums.end());
        return cnt;
    }
};