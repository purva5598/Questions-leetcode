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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr=head;
          ListNode*curr;
        int h=0;
        if(head==nullptr) return nullptr;
        while(ptr->next!=nullptr){
          
            if(ptr->val==ptr->next->val){
                curr=ptr;
                while(curr->val==ptr->next->val){
                    if(ptr->next->next!=nullptr) ptr->next=ptr->next->next;
                    else {ptr->next=nullptr; 
                          h=1;
                          break;}
                }
                if(h==1) break;
                curr=ptr->next;
                ptr=curr;
            }else{
                ptr=ptr->next;
            }
        }
        return head;
    }
};