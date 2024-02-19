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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node=l1;
        ListNode* nodee=l2;
        ListNode* temp=new ListNode(-1);
        ListNode* tempp=temp;
        int cnt=0,cntt=0,h=0;;
        while(node!=nullptr){
            node=node->next;
            cnt++;
        }
        cout<<cnt<<endl;
        
        while(nodee!=nullptr){
            nodee=nodee->next;
            cntt++;
        }
        cout<<cntt<<endl;
        
        int max=0;
         ListNode* after=new ListNode(-1);
        if(cntt>=cnt){
            after->next=l2;
            max=cntt;
        }
        else{
            after->next=l1;
            max=cnt;
        }
        cout<<max<<" "<<after->next->val<<endl;
        
        int i=0;
        int carry=0;
        node=l1;
        nodee=l2;
        while(i<min(cnt,cntt)){
             ListNode* ans=new ListNode(-1);
            cout<<node->val<<" "<<nodee->val<<" "<<carry<<endl;
           
            if(node->val+nodee->val+carry>9){
                ans->val=(node->val+nodee->val+carry)%10;
                carry=1;
                h=1;
            }
            else{
                ans->val=node->val+nodee->val+carry;
                carry=0;
                h=0;
            }
           cout<<temp->val<<endl;
            
            temp->next=ans;
            cout<<temp->next->val<<endl;
           
            temp=ans;
            i++;
            cout<<temp->val<<endl;
           
            node=node->next;
            nodee=nodee->next;
        }
        
        
        i=1;
        cout<<"jjj"<<endl;
       
        while(i<=max){
            cout<<"L"<<endl;
            after=after->next;
             cout<<after->val<<endl;
           
            if(i>min(cnt,cntt)){
                    ListNode* ans=new ListNode(-1);
                    cout<<i<<" "<<carry<<endl;
                
                    if(after==nullptr){
                        ans->val=0;
                        after=ans;
                        cout<<"k"<<endl;

                    }
                
                    if(after->val+carry>9){
                        // if(i==max-1){
                        //     h=1;
                        // }
                        ans->val=(after->val+carry)%10;
                        carry=1;
                        h=1;
                        cout<<ans->val<<endl;
                    }
                    else{
                        ans->val=after->val+carry;
                        cout<<ans->val<<endl;
                        carry=0;
                        h=0;
                    }
                    temp->next=ans;
                    cout<<">"<<temp->val<<endl;
                    temp=ans;
                    cout<<temp->val<<endl;
            }
            
            i++;
            
        }
        
        
        if(h==1){
             ListNode* ans=new ListNode(1);
            temp->next=ans;
                cout<<temp->val<<endl;
                temp=ans;
                cout<<temp->val<<endl;
        }
        return tempp->next;
    }
};