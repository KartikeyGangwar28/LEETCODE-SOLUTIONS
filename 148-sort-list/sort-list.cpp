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
        if(head==nullptr||head->next==nullptr){
            return head;
        }
        ListNode*temp=head;
        vector<int>mul;
        while(temp){
            mul.push_back(temp->val);
            temp=temp->next;
        }
        sort(mul.begin(),mul.end());
        int n=mul.size();
        ListNode*newHead=new ListNode(mul[0]);
        ListNode*mover=newHead;
        for(int i=1;i<n;i++){
            ListNode*temp=new ListNode(mul[i]);
            mover->next=temp;
            mover=temp;
        }
        return newHead;
    }
};