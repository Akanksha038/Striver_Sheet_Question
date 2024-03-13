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
    
    int Length(ListNode*&head){
        ListNode*temp=head;
        int len=0;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        
        
        if(head==NULL) {
            return NULL;
        }
        int len=Length(head);
        if(len<k)
        {
            return head;
        }
        
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*NEXT=curr->next;
        int count=0;
        
        while(count<k )
        {
            NEXT=curr->next;
            curr->next=prev;
            prev=curr;
            curr=NEXT;
            count++;
         }
        
        if(NEXT!=NULL){
                head->next=reverseKGroup(NEXT,k);
                
            }
        
        
          return prev; 
        
    }
};


