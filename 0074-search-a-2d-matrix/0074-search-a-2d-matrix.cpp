class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        for(int i=0;i<matrix.size();i++){
            if(matrix[i][matrix[i].size()-1]>=target){
                for(int j=0;j<matrix[i].size();j++){
                    if(matrix[i][j]==target){
                        ans=true;
                        break;
                    }
                }
                break;
            }
        }
        return ans;
        
    }
};