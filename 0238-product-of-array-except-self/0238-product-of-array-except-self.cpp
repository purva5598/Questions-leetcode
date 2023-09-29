class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> answer;
        int product=1;
        int p=1;
        int h=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==0){
                p=product;
                h=1;
            }
            else if(h==1){
                p=p*nums[i];
            }
            product=product*nums[i];
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                answer.push_back(p);
            }
            else{
            answer.push_back(product/nums[i]);
            }
        }
        return answer;
    }
};