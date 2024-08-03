class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        int amt5=0,amt10=0,amt20=0;
        for(int i=0;i<bills.size();i++){
           if(bills[i]==5){
               amt5++;
           }
            else if(bills[i]==10){
                amt10++;
                if(amt5>0){
                    amt5--;
                }
                else{
                    return false;
                }
            }
            
            else{
                amt20++;
                if(amt10>0 && amt5>0){
                    amt10--;
                    amt5--;
                }
                else if(amt5>2){
                    amt5=amt5-3;
                }
                else{
                    return false;
                }
            }
            
        }
        return true;
    }
};