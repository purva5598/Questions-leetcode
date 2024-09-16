class Solution {
public:
//     int findMinDifference(vector<string>& timePoints) {
//         vector<int> time;
//         int a;,num=0
//         for(int i=0;i<timePoints.size();i++){
//             int a=3;
//             num=0;
//             for(int j=0;j<timePoints.size();j++){
//                 if(timePoints[i][j]!=':'){
//                    num+=pow(10,a)*timePoints[i][j]; 
//                     a--;
//                 }
//             }
//             time.push_back(num);
//         }
//         sort(time.begin(),time.end());
//         int ans=time[1]-time[0];
//         if(ans>59){
//             ans+=(ans/60)
//         }
        
//         return time
//     }
// };
    
    int findMinDifference(vector<string>& timePoints) {
        vector<int> vec;
        for(const auto & timePoint : timePoints){
            int h = (timePoint[0]-'0')*10 + (timePoint[1]-'0');
            int m = (timePoint[3]-'0')*10 + (timePoint[4]-'0');

            int mins = h*60 + m;
            vec.push_back(mins);
        }
        sort(vec.begin(),vec.end());
        int res = INT_MAX;
        for(int i=1; i<vec.size(); i++){
            res = min(vec[i]-vec[i-1],res);
        }
        return min(res,1440+vec[0] - vec.back());
    }
};