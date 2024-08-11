class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> s;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end()); 
        int sum=0;
       for(int i=0;i<nums.size();i++){
          int mid=i+1;
    int end=nums.size()-1;
           while(mid<end){
               sum=nums[i]+nums[mid]+nums[end];
               if(sum==0){
                   s.insert({nums[i],nums[mid],nums[end]});
                   mid++;
                   end--;
               }
               else if(sum<0){
                   mid++;
               }
               else{
                   end--;
               }
               sum=0;
           }
       }
        for( auto i:s){
            ans.push_back(i);
        }
        return ans;
    }
};


// map<char,int> m;
// m.first m.second
// m[s[i]]+=1;
// m['a']='b';
// m[s[i]]=t[i]
// cout<<m.first<<" "<<m.seclo