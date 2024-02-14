/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=nullptr){
            if(fast==nullptr|| fast->next==nullptr){
                return NULL;
            }
            slow=slow->next;
            fast=fast->next->next;
             // cout<<slow->val<<" "<<fast->val<<endl;
            if(slow==fast){
                break;
            }
        }
        slow=head;
        // cout<<slow->val<<" "<<fast->val<<endl;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
            // cout<<slow->val<<" "<<fast->val<<endl;
        }
    
        return slow;
    }
};