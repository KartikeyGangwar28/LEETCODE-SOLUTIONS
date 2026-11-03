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
    int pairSum(ListNode* head) {
        deque<int>dq;
        ListNode*temp=head;
        while(temp){
            dq.push_back(temp->val);
            temp=temp->next;
        }
        int sum=0,ans=0;
       // cout<<"chcek";
        while(!dq.empty()){
              sum+=dq.front();
              sum+=dq.back();
              dq.pop_back();
              dq.pop_front();
              ans=max(ans,sum);
              sum=0;
        }
        return ans;
        
    }
};