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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        
        ListNode* temp=new ListNode(-1);
        ListNode* t=temp;
        ListNode* node=head;
        while(node!=NULL){
            cout<<">1 "<<temp->val<<" "<<node->val<<endl;
            if(node->next!=nullptr){
            temp->next=node->next;
            cout<<">2 "<<temp->next->val<<" "<<node->val<<endl;
            // temp->next->next=nullptr;
                if(node->next->next!=nullptr){
            node->next=node->next->next;
                }
                else{
                    // node->next=t->next;
                    temp=temp->next;
                    break;
                }
            cout<<">3 "<<node->next->val<<" "<<node->next->val<<endl;
            
            temp=temp->next;
            node=node->next;
            }
            
            // cout<<temp->val<<endl;
            
            else{
                cout<<"break"<<endl;
                break;
            }
        }
        node->next=t->next;
        temp->next=nullptr;
        // cout<<node->next->val<<" "<<t->next->val;
        return head;
        
        
    }
};