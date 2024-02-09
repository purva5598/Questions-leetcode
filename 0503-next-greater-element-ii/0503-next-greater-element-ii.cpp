class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int> ans;
        vector<int> temp(nums);
        int k=0;
        cout<<temp.size()<<endl;
        sort(temp.begin(),temp.end());
        
        
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==temp[temp.size()-1]){
                ans.push_back(-1);
            }
            else{
                k=i;
                if(k+1==nums.size()){
                     for(int j=0;j<=nums.size();j++){
                    if(nums[j]>nums[i]){
                        ans.push_back(nums[j]);
                        break;
                    }
                    if(j==nums.size()-1){
                        j=-1;
                    }
                    if(j==i){
                        ans.push_back(-1);
                        break;
                    }
                    
                } 
                    
                }
                else{
               for(int j=k+1;j<=nums.size();j++){
                    if(nums[j]>nums[i]){
                        ans.push_back(nums[j]);
                        break;
                    }
                    if(j==nums.size()-1){
                        j=-1;
                    }
                    if(j==i){
                        ans.push_back(-1);
                        break;
                    }
                    
                } }
            }
        }
        return ans;
    }
};