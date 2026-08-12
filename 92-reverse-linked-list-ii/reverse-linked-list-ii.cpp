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
void reverse(ListNode*left,ListNode*right){
       stack<int>st;
       ListNode*temp=left;
       while(temp!=right->next){
        st.push(temp->val);
        temp=temp->next;
       }
       temp=left;
       while(temp!=right->next){
        temp->val=st.top();
        st.pop();
        temp=temp->next;
       }
}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==nullptr){
            return head;
        }
        if(head==nullptr){
            return head;
        }
        ListNode*l=head;
        ListNode*r=head;
        int a=left,b=right;
        while(a!=1){
            l=l->next;
           a-=1;
        }
        while(b!=1){
            r=r->next;
            b-=1;
        }
        reverse(l,r);
        return head;
    }
};