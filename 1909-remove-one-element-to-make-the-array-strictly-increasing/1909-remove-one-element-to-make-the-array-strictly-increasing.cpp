class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        vector<int> temp;
        int h=0;
        int idx;
        temp=nums;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                idx=i;
                auto it = temp.begin() + i+1; // iterator to the 3rd element
                temp.erase(it);
                break;
            }
        }
         for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i]>=temp[i+1]){
                h=1;
            }
        }
        if(h==1){
            auto it = nums.begin() + idx; // iterator to the 3rd element
                nums.erase(it);
            for(int i=0;i<nums.size();i++){
            cout<<nums[i]<<" ";
        }
        cout<<endl;
        }else return true;
        
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                return false;
            }
        }
        return true;
    }
};