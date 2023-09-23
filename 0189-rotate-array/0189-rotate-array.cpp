class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        
        if(k==0) return;

        vector<int> temp(nums.begin()+(n-k),nums.end()); 
        nums.erase(nums.begin()+(n-k),nums.end()); 
        nums.insert(nums.begin(),temp.begin(),temp.end());
    }
};