class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        vector<int> ans;
        int cnt=0;
        int first=0;
        int second=0;
        int dif=INT_MAX;
        for(int j=0;j<nums.size();j++){
            dif=INT_MAX;
         for(int i=j;i<nums.size();i++){
             
            if(nums[j]<nums[i]){
                cnt++;
                if(first<=j){
                    first=j;
                    if(dif>=(nums[i]-nums[j])){
                        
                        second =i;
                    dif=nums[i]-nums[j];
                    }
                }
                    
                
            }
            
        }
        }

        if(cnt==0){
            sort(nums.begin(),nums.end());
        }
        else{
            
            swap(nums[first],nums[second]);
            for(int i=first+1;i<nums.size();i++){
                ans.push_back(nums[i]);
            }
            sort(ans.begin(),ans.end());
            
            int k=0;
            for(int i=first+1;i<nums.size();i++){
                nums[i]=ans[k];
                k++;
            }
        }
    }
};