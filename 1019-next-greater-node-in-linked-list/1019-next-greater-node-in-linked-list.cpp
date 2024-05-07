class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) 
    {

        vector<int>LL;
        while(head)
        {
            LL.push_back(head->val);
            head=head->next;
        }


        stack<int>s;
        vector<int>ans(LL.size());
        for(int i=0;i<LL.size();i++){
            while(!s.empty() && LL[i]>LL[s.top()])
            {
                int previousGreaterIndex=s.top();
                 s.pop();
                ans[previousGreaterIndex]=LL[i];
                // This line is added to remove the element from the stack
            }

            s.push(i);
        }
        return ans;
        
    }
};
