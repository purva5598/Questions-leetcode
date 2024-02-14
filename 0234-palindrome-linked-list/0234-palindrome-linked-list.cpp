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
    bool isPalindrome(ListNode* head) {
        ListNode* end=head;
        ListNode* node=head;
        vector<int> v;
        int cnt=0;
        while(end!=NULL){
            end=end->next;
            cnt++;
        }
        cout<<cnt<<endl;
        ListNode* mid=head;
        for(int i=0;i<cnt/2;i++){
            mid=mid->next;
        }
        cout<<">"<<mid->val<<endl;
        ListNode* m=mid;
        
      while(mid!=nullptr){
          v.push_back(mid->val);
          mid=mid->next;
      }
        cout<<" <"<<mid<<endl;
        int i=v.size()-1;
        while(node!=m){
            cout<<v[i]<<"_"<<node->val<<endl;
            if(node->val!=v[i]){
                return false;
            }
                        i--;

            node=node->next;
        }
        return true;
        
    }
};