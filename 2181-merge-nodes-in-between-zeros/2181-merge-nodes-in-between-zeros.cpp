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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ptr =head;
        int h=0;
        ListNode* prev= new ListNode(-1);
        ListNode* phead =prev;
        while(ptr->next!=nullptr){
            h=0;
            int sum=0;
            while(ptr->val!=0){
                sum+=ptr->val;
                ptr=ptr->next;
                h=1;
            }
            if(sum!=0 && ptr->val==0){
                ListNode * newNode =new ListNode(sum);
                prev->next=newNode;
                prev=newNode;
                sum==0;
            }
            if(h!=1){
                ptr=ptr->next;
            }
        }
        return phead->next;
        
    }
};