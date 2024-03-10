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


// //by using loop

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) 
//     {
//               ListNode*prev=NULL;
//         ListNode*curr=head;
//         while(curr!=NULL)
//         {
//             ListNode*temp=curr->next;
//             curr->next=prev;
//             prev=curr;
//             curr=temp;
//         }
        
//         return prev;
//       }
// };






//by using recursion

class Solution {
public:
    
    
    
    
    ListNode* reverseListusingRecursion(ListNode* prev,ListNode* curr){
        if(curr==NULL) return prev;
        
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
            return reverseListusingRecursion(prev,curr);
            }
    
    
    ListNode* reverseList(ListNode* head) 
    {
        ListNode*prev=NULL;
        ListNode*curr=head;
       
        head=reverseListusingRecursion( prev, curr);
        return head;
      }
};