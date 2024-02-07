class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans=0;
        if(find(nums.begin(), nums.end(), target) != nums.end()){
            ans=find(nums.begin(), nums.end(), target)-nums.begin();
        }
        else{
            ans=-1;
        }
            
        
        return ans;
    }
};