class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        if(nums.size()==1){
            ans.push_back(nums[0]);
            return ans;
        }
        for(int i=0;i<nums.size()-1;i++){
            
            if(nums[i]!=nums[i+1]){
                if(i==0){
                    if(nums[i]+1!=nums[i+1]){
                        ans.push_back(nums[i]);
                    
                    }
                }
                else{
                    if(nums[i-1]!=nums[i]-1 && nums[i]+1!=nums[i+1]){
                        
                    cout<<nums[i]<<"here"<<endl;
                        ans.push_back(nums[i]);
                        
                    }
                }
            }else{
                while(i<nums.size()-1&&nums[i]==nums[i+1])
                i++;
            }
        }
        
                    if(nums[nums.size()-1]-1!=nums[nums.size()-2] && nums[nums.size()-1]!=nums[nums.size()-2]){
                        ans.push_back(nums[nums.size()-1]);
                      
                    }
        return ans;
    }
};