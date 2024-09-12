class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        set<char> s;
        for(int i=0;i<allowed.length();i++){
            s.insert(allowed[i]);
        }
        int cnt=0;
        for(int i=0;i<words.size();i++){
            for(int j=0;j<words[i].length();j++){
                if(s.find(words[i][j])==s.end()){
                    break;
                }
                if(j==words[i].length()-1){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};