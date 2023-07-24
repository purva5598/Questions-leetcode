class Solution {
public:
    int minOperations(vector<string>& logs) {
        stack <string> s;
        for(int i=0;i<logs.size();i++){
            if(s.empty()){
                if(logs[i]=="../"|| logs[i]=="./"){
                    continue;
                }
                else{
                s.push(logs[i]);
                }
            }
            else if( logs[i]=="./"){
                continue;
            }
            else if(logs[i]=="../"){
                s.pop();
            }
            else{
                s.push(logs[i]);
            }
        }
        int ans=s.size();
        return ans;
    }
};