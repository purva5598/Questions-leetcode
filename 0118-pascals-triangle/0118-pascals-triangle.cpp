class Solution {
public:
    vector<vector<int>> generate(int numRows) {
     vector<vector<int>> ans;
        vector<int> newV;
        vector<int> temp;
        int k=1;
        for(int i=1;i<=numRows;i++){
            for(int j=0;j<i;j++){
                cout<<j<<endl;
                if(i<3){ 
                    cout<<"hj"<<newV.size()<<endl;
                    newV.push_back(1);
                }
                else{
                    cout<<"jk"<<endl;
                    if(j==0){ 
                        cout<<"jj"<<newV.size()<<endl;
                        newV.push_back(1);}
                    
                    else{
                        cout<<"sz"<<temp.size()<<endl;
                        for(int l=0;l<temp.size()-1;l++){
                            cout<<temp[l]<<" "<<temp[l+1]<<endl;
                            newV.push_back(temp[l]+temp[l+1]);
                            cout<<"lm"<<newV.size()<<endl;
                        }
                        newV.push_back(1);
                        break;
                        
                    }
                }
            }cout<<i<<"here"<<endl;
            cout<<newV.size()<<endl;
             ans.push_back(newV);
            temp=newV;
            newV.clear();
            
        }
        return ans;
    }
};