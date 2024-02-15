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
    ListNode* deleteMiddle(ListNode* head) {
     if(head->next==nullptr){
         return nullptr;
     }
        ListNode* node=head;
        ListNode* nn=head;
        int size=0;
        while(node!=nullptr){
            node=node->next;
            size++;
        }
        
        node=head;
        
        int cnt=1;
        while(cnt!=size/2){
            node=node->next;
            cnt++;   
        }
        nn=node;
        nn=nn->next;
       
        node->next=node->next->next;
        nn->next=nullptr;
        return head;
    }
};