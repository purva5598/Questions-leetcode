class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        int n=seats.size();
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int cnt=0;
        for(int i=0;i<seats.size();i++){
            cnt=cnt+abs(seats[i]-students[i]);
        }
        return cnt;
    }
};