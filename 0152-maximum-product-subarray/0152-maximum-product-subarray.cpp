class Solution {
public:
    int maxProduct(vector<int>& nums) {
    double pre=1;
     double suf=1;
         double ans=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(suf==0) suf=1;
            if(pre==0) pre=1;
            
            suf*=nums[nums.size()-i-1];
            cout<<i<<endl;
            pre*=nums[i];
            ans=max(ans, max(pre,suf));
        }
        return ans;
    }
};