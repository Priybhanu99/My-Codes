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
    
    void sortedInsert(ListNode** head_ref, ListNode* new_node) 
    { 
        ListNode* current; 
    /* Special case for the head end */
        if (*head_ref == NULL || (*head_ref)->val >= new_node->val) 
        { 
            new_node->next = *head_ref; 
            *head_ref = new_node; 
        } 
        else
        { 
        /* Locate the node before the point of insertion */
            current = *head_ref; 
            while (current->next!=NULL && 
             current->next->val < new_node->val) 
            { 
                current = current->next; 
            } 
            new_node->next = current->next; 
            current->next = new_node; 
        } 
    } 
    
    ListNode* insertionSortList(ListNode* head) {
        if(!head || !(head->next)){
            return head;
        }
        
        ListNode* sorted = NULL;
        ListNode* temp = sorted,*A = head;
        
        while(A){
            ListNode* next = A->next;
            sortedInsert(&sorted,A);
            A = next;
        }
        
        return sorted;
    }
};