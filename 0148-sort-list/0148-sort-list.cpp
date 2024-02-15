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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr){
            return nullptr;
        }
        if(head->next==nullptr){
            return head;
        }
        
//         ListNode* node=head;
//         int temp=0;
//         int h=0;
//         while(h!=2){
//             if(node->next==nullptr){
//                 node=head;
//                 h=1;
//             }
//             if(node->val > node->next->val){
//                 temp=node->val;
//                 cout<<temp<<endl;
               
//                 node->val=node->next->val;
//                 cout<<node->val<<endl;
                
//                 node->next->val=temp;
//                 cout<<node->next->val<<endl;
//                 h=0;
//             }
//             node=node->next;
//             if(node->next==nullptr && h==1){
//                 h=2;
//             }
//         }
//         return head;
        vector<int> v;
    ListNode* node=head;

    while(node!=nullptr){
        v.push_back(node->val);
        node=node->next;
    }
    sort(v.begin(),v.end());
    node=head;
    int i=0;
    while(node!=nullptr){
        node->val=v[i];
        i++;
        node=node->next;
    }
    return head;

    }
};