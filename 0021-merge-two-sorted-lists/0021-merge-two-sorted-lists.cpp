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
    ListNode* f(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) return list2; // If list1 is exhausted, return list2
        if (list2 == nullptr) return list1; // If list2 is exhausted, return list1

        ListNode* result = nullptr;
        if (list1->val <= list2->val) {
            result = new ListNode(list1->val); // Create a new node with list1's value
            result->next = f(list1->next, list2); // Recursively merge the rest
        } else {
            result = new ListNode(list2->val); // Create a new node with list2's value
            result->next = f(list1, list2->next); // Recursively merge the rest
        }
        return result;
    }
    
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        return f(list1, list2); // Start the recursive merging
    }
};