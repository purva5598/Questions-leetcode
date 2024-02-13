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
    ListNode* reverseList(ListNode* head) {
        
        ListNode* ptr=head;
         ListNode* ptrr=NULL;
        ListNode* node;
        while(ptr!=NULL){
            
            node=ptr->next;
            // cout<<"*"<<ptr->val<<" "<<node->val<<endl;
            ptr->next=ptrr;
            
            ptrr=ptr;
            // cout<<"**"<<ptr->val<<" "<<node->val<<endl;
            ptr=node;
    
            // cout<<"***"<<ptr->val<<" "<<node->val<<endl;
        }
        return ptrr;
    }
};