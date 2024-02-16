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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* node=headA;
        ListNode* nodee=headB;
        while(node!=nullptr){
            while(nodee!=nullptr){
                if(node==nodee){
                    return node;
                }
                nodee=nodee->next;
                
            }
            node=node->next;
            nodee=headB;
        }
        return nullptr;
    }
};