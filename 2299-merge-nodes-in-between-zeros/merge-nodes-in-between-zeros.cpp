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
ListNode*start=nullptr;
ListNode*end=nullptr;
void generate(int val){
     if(start==nullptr){
         ListNode*newNode=new ListNode(val);
         start=newNode;
         end=newNode;
         return;
     }
      ListNode*newNode=new ListNode(val);
      end->next=newNode;
      end=newNode;
}
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head->next;
        int sum=0;
        while(temp){
          if(temp->val==0){
          generate(sum);
            sum=0;
          }
          else{
               sum+=temp->val;   
          }
          temp=temp->next;
        }
       return start;
    }
};