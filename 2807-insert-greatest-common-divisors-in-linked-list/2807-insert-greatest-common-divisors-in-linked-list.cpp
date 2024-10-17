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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* ptr=head;
        while(ptr->next!=nullptr){
            int gcdd=gcd(ptr->val,ptr->next->val);
            ListNode* temp=ptr->next;
            ListNode* newNode= new ListNode(gcdd);
            ptr->next=newNode;
            newNode->next=temp;
            ptr=temp;
        }
        
    return head;
    }
};