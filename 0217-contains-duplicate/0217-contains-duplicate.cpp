class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool b=false;
        stack<int> s;
        for(int i=0;i<nums.size()-1;i++){
            s.push(nums[i]);
            
                if(s.top()==nums[i+1]){

                    b=true;
                    break;
                }
                else{
                    s.pop();
                }
            
        }
        return b;
    }
};