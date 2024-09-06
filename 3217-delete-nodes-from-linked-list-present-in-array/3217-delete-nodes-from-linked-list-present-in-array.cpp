/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int> v;
        while(head!=nullptr){
            v.push_back(head->val);
            head=head->next;
        }
        
        unordered_set<int> s(nums.begin(),nums.end());
        
        for(int i=0;i<v.size();){
                if(s.find(v[i])!=s.end()){
                     cout << v[i] << "idxx" << endl; 
                    v[i]=-1;
                  
                }else i++;
             }
        
        if (v.empty()) return nullptr;
                         ListNode *ans     = new ListNode();
                         ListNode *ansHead = ans;
        int idx;
        for(int i=0;i<v.size();i++){
            if(v[i]!=-1){
                ans->val=v[i];
               idx=i;
                break;
            }
        }
                         for(int i=idx+1;i<v.size();i++){
                             
                             if(v[i]!=-1) {
                            ListNode* n=new ListNode(v[i]);
                             
                             ans->next=n;
                             ans=n;}
                         }
                         return ansHead;
                        
    }
};