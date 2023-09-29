class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        sort(citations.begin(),citations.end());
        
        int r=citations.size()-1;
        int i=1;
        
        while(r>=0&&i<=citations[r]){
            r--;
            i++;
            
        }
        return i-1;
        
    }
};