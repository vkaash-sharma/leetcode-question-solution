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
        
        if(head == NULL || head->next ==NULL){
            return head;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* temp = NULL;
        
        while(fast!=NULL && fast->next!=NULL){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next = nullptr;
        
        ListNode* p = sortList(head);
        ListNode* q = sortList(slow);
        
        return merging(p , q);
        
    }
    
    ListNode* merging(ListNode* l1 , ListNode* l2){
        
        ListNode* curr = NULL;
         
        if(l1 == NULL){
            return l2;
            
        }
        if(l2 ==NULL){
            return l1;
        }
        

         if(l1->val <= l2->val){
             curr=l1;
             curr->next = merging(l1->next , l2);
             
         }else{
             curr = l2;
             curr->next = merging(l1 , l2->next);
         }
        
        
        return curr;
    }
    
};



// we have to use the mergesort to sort the linked list  so what we have to do is to just first the divide the linked list into seprate linkedlist how we can do this using two pointer approach we move the slow pointer by one and fast by two moves and we have to two null the value of slow->next to break the linkedlist into two parts so the things is going two super simple now we can recursivly call the function itself two the seprate the linkedlist  then lastly we have to call the function which can merge them in acending order fashion thats it


// Enjoy Happy coding