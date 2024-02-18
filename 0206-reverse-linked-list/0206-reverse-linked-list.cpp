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
class Solution 
{
public:
    ListNode* reverseList(ListNode* head) {
        
        // step1: ham ek vector me saari vakue ko push back kara le 
            // step 2: ham back yani last se value ko ek temp node me store kar de aur vector me value store this usse pop back kar de
        
        ListNode*temp=head;
        vector<int>v;
        //step1
        while(temp!=0)
        {
            v.push_back(temp->val);
            temp=temp->next;
            
        }
        
//         //step2
        temp = head;
        while(temp!=NULL)
        {
            temp->val=v.back();
            v.pop_back();
            temp=temp->next;
        }
      
        return head;
        
    }
};