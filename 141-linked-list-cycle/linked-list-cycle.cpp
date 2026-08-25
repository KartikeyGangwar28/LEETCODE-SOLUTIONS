/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*start=head;
        ListNode*fast=head;
        while(fast!=nullptr&&fast->next!=nullptr){
            start=start->next;
            fast=fast->next->next;
            if(start==fast){
                return true;
            }

        }
        return false;
    }
};