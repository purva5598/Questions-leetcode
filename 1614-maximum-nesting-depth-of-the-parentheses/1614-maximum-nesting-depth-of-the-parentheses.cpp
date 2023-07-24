class Solution {
public:
    int maxDepth(string s) {
        stack <char> st;
        int a[100];
        int k=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else if(s[i]==')'){
                a[k]=st.size();
                k++;
                st.pop();
            }

        }
        int max=0;
        for(int j=0;j<k;j++){
            if(max<=a[j]){
                max=a[j];
            }
        }
        return max;
    }
};