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
    ListNode* middleNode(ListNode* head) {
        ListNode* node=head;
        int cnt=0;
        while(node!=NULL){
            cnt++;
            node=node->next;
        }
        
        for(int i=0;i<cnt/2;i++){
            head=head->next;
        }
        
    return head;
    }
};