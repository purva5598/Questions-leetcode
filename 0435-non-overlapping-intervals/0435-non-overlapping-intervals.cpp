class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[1] < b[1];
    });;
        for(int i=0;i<intervals.size();i++){
            cout<<"["<<intervals[i][0]<<","<<intervals[i][1]<<"],";
        }
        cout<<endl;
        int cnt=1;
        int lastEndTime=intervals[0][1];
        vector<vector<int>> ans;
        ans.push_back(intervals[0]);
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]>=lastEndTime){
                cnt++;
                lastEndTime=intervals[i][1];
            }
        }
        return intervals.size()-cnt;
    }
};