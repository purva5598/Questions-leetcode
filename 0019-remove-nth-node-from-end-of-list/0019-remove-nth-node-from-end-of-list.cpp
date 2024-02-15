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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr && n==1){
            return nullptr;
        }
        ListNode* node=head;
        ListNode* nn=head;
        int size=0;
        while(node!=nullptr){
            node=node->next;
            size++;
        }
        if(n==size){
            return head->next;
        }
        node=head;
        
        int cnt=1;
        while(cnt!=size-n){
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