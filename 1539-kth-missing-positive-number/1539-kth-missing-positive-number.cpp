class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int num=1;
        set<int> s;
        for(int i=0;i<arr.size();i++){
            s.insert(arr[i]);
        }
        while(k>0){
          
            if(s.find(num) != s.end()){
                num++;
            }
            else{
                k--;
                num++;
            }
            
        }
        return num-1;
    }
};