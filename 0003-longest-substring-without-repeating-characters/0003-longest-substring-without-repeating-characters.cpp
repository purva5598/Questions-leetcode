class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;
        set<int> len;
        int cnt=0;
        int h=2;
        for(int i=0;i<s.length();i++){
            
            if(m.find(s[i])!=m.end()){
                len.insert(cnt);
                cnt=i-m[s[i]];
                auto it = m.begin();
                while (it != m.end()) {
                    if (it->second < m[s[i]]) {
                        it = m.erase(it); // erase returns the next iterator
                    } else {
                        ++it; // Move to the next element
                    }
                }
                m[s[i]]=i;
                cout<<m[s[i]]<<" "<< s[i]<<" "<<cnt<<endl;
                h=1;
            }else{
                m[s[i]]=i;
                 cout<<m[s[i]]<<" "<< s[i]<<endl;
                cnt++;
                cout<<cnt<<endl;
                h=0;
            }
        }
        if(h==0) len.insert(cnt);
        return *max_element(len.begin(),len.end());
    }
};