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
    ListNode* temp=head;
    int count=0;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}
ListNode*deleteTail(ListNode*head){
    if(head==nullptr){
        return nullptr;
    }
    if(head->next==nullptr){
        delete head;
        return nullptr;
    }
    ListNode*temp=head;
    ListNode*prev=temp;
    while(temp->next!=nullptr){
        prev=temp;
        temp=temp->next;
    }
    prev->next=nullptr;
    delete temp;
    return head;

}
ListNode* removeNthFromEnd(ListNode* head, int n){
  int l=length(head);
//   if(head==nullptr){
//     return nullptr;
//   }
//   if(n>l){
//     return head;
//   }
  if(n==l){
ListNode*temp=head;
head=head->next;
delete temp;
return head;
  }
  int loc=l-n;
  ListNode*temp=head;
  while(loc!=1){
    temp=temp->next;
    loc--;
  }
ListNode*toDelete=temp->next;
temp->next=temp->next->next;
delete toDelete;
return head;

}
   //optimise it later;
   
};