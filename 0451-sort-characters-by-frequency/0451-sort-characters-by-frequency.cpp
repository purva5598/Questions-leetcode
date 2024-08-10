class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]+=1;
        }
        vector<pair<char, int>> freqVec(m.begin(), m.end());

    
        sort(freqVec.begin(), freqVec.end(), [](pair<char, int>& a, pair<char, int>& b) {
            return b.second < a.second; // Sort by frequency in descending order
        });

        // Construct the output string based on sorted frequencies
        for (auto& p : freqVec) {
            for(int i=0;i<p.second;i++){
            ans += p.first;}
        }
        return ans;
        
    }
};