class Solution {
    
    vector<int> nextSmaller(vector<int> &arr, int n){
        vector<int> ans;
        stack<int> s;
       
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                ans.push_back(-1);
                s.push(i);
                continue;
            }
            
          if(arr[i]>arr[s.top()]){
              ans.push_back(s.top());
              s.push(i);
          }
          else{
               while(!s.empty() &&arr[s.top()]>=arr[i])
                  s.pop();
                    
              if(s.empty())
              {
                ans.push_back(-1);
                s.push(i);
              }else{
                  ans.push_back(s.top());
                  s.push(i);
                }
          }
        }
        reverse(ans.begin(),ans.end());
    return ans;
}
    
    vector<int> prevSmaller(vector<int> &arr, int n){
        vector<int> ans;
        stack<int> s;
       
        for(int i=0;i<n;i++){
            if(s.empty()){
                ans.push_back(-1);
                s.push(i);
                continue;
            }
            
          if(arr[i]>arr[s.top()]){
              ans.push_back(s.top());
              s.push(i);
          }
          else{
               while(!s.empty() &&arr[s.top()]>=arr[i])
                  s.pop();
                    
              if(s.empty())
              {
                ans.push_back(-1);
                s.push(i);
              }else{
                  ans.push_back(s.top());
                  s.push(i);
                }
          }
        }
       
    return ans;
}
    
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int> next;
        next=nextSmaller(heights,n);
        int area=0;
        
        vector<int> prev;
        prev=prevSmaller(heights,n);
        
        for(int i=0;i<heights.size();i++){
            int l=heights[i];
            int b;
            if(next[i]==-1){
                next[i]=n;
                
            }
            b=next[i]-prev[i]-1;
            area=max(area,(l*b));
        }
        return area;
    }
};