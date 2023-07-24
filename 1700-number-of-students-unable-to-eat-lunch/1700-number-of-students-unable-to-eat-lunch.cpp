class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> sa;
        
        queue<int> st;
        int cnt=0,cntt=0,cnttt=0;
        int n=sandwiches.size();
        for(int i=0;i<students.size();i++){
            if(students[i]==0){
                cnt++;
            }
            if(sandwiches[i]==0){
                cntt++;
            }
            st.push(students[i]);
            sa.push(sandwiches[n-1-i]);

        }
        
        if(cnt==cntt){
            cout<<"0"<<endl;
        }
        
        else{
            while(st.size()!=0){
                if(sa.top()==st.front()){
                    sa.pop();
                    st.pop();
                    cnttt=0;
                }
                else{
                    st.push(st.front());
                    st.pop();
                    cnttt++;
                    if(cnttt==st.size()){
                       // cout<<cnt<<endl;
                        break;
                    }
                }
            }
        }
        return cnttt;

    }    
    
};