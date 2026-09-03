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
void insert(ListNode*prev,int val){
    ListNode*newNode=new ListNode(val,prev->next);
    prev->next=newNode;
}
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*prev=head;
        ListNode*next=prev->next;
        while(next){
            int gd=gcd(prev->val,next->val);
            insert(prev,gd);
            prev=next;
            next=next->next;
        }
        return head;
    }
};