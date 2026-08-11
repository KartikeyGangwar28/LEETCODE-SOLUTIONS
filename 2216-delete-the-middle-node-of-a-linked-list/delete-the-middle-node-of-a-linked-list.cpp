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
int length(ListNode*head){
    ListNode*temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}
    ListNode* deleteMiddle(ListNode* head) {
             int l=length(head);
             int target=l/2;
             if(l==2){
                ListNode*ex=head->next;
                head->next=nullptr;
                delete ex;
                return head;
             }
             if(l==1){
                head=head->next;
                return head;
             }
             ListNode*temp=head;
             ListNode*prev=temp;
             while(target!=0){ //because we are playing with prev agar target!=1 rakhte then instead of prev we will modify using temp->next=temp->next->next'
                prev=temp;
                temp=temp->next;
                target--;
             }
             prev->next=temp->next;
             delete temp;
             return head;
    }
};