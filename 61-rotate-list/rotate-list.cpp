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
long long int length(ListNode*head){
    ListNode*temp=head;
    long long int len=0;
    while(temp){
        len++;
        temp=temp->next;
    }
    return len;
}
ListNode*shiftHeadtoEnd(ListNode*head){
ListNode*temp=head;
ListNode*prev=temp;
while(temp->next!=nullptr){
    prev=temp;
    temp=temp->next;
}
ListNode*newNode=new ListNode(temp->val);
prev->next=nullptr;
newNode->next=head;
head=newNode;
delete temp;
return head;

}
    ListNode* rotateRight(ListNode* head, int k) { 
        if(head==nullptr){
            return head;
        }
       
     long long int l=length(head);
        if(k>=l){
            k=k%l;
        }
        
        if(head->next==nullptr){
            return head;
        }
        
        while(k--){
            head=shiftHeadtoEnd(head);
        }
        return head;
    }
};