class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row ;
        set<int> column;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                   row.insert(i);
                    column.insert(j);
                    
                }
            }
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(row.find(i) != row.end() || column.find(j)!=column.end()){
                  matrix[i][j]=0;
                }
               
            }
        }
        
    }
};