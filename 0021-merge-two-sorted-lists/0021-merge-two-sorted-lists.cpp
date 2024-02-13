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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> temp;
        ListNode* node=new ListNode(-1);
        node=list1;
        while(node!=NULL){
            
            temp.push_back(node->val);
            node=node->next;
        }
        node=list2;
        while(node!=NULL){
            
            temp.push_back(node->val);
            node=node->next;
        }
        sort(temp.begin(),temp.end());
        
        ListNode* head=new ListNode(-1);
        ListNode* ptr=head;
        
        for(int i=0;i<temp.size();i++){
          ListNode* nn=new ListNode(temp[i]);
            ptr->next=nn;
            ptr=ptr->next;
        }
        
        return head->next;
    }
    
};