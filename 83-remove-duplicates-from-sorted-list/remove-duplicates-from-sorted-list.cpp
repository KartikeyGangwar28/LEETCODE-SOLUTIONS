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
ListNode*del(ListNode*prev){
    prev->next=prev->next->next;
    // ListNode*fwd=prev->next;
    return prev;
    }

    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        ListNode*temp=head;

        ListNode*prev=temp;
        temp=temp->next;
        while(temp){
            if(prev->val==temp->val){
               prev=del(prev);
               temp=prev->next;
            }
            else{
            prev=temp;
            temp=temp->next;
            }
        }
        return head;
    }
};