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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr&&list2==nullptr)return nullptr;
        if(list1==nullptr&&list2!=nullptr)return list2;
        if(list2==nullptr)return list1;
     ListNode*t1=list1;
     ListNode*t2=list2;
     vector<int>s;
     while(t1){
        s.push_back(t1->val);
       
        t1=t1->next;
      
     }
     while(t2){
 s.push_back(t2->val);
   t2=t2->next;
     }
     sort(s.begin(),s.end());
     ListNode*head=new ListNode(s[0]);
     ListNode*mover=head;
     int n=s.size();
     for(int i=1;i<n;i++){
        ListNode*temp=new ListNode(s[i]);
        mover->next=temp;
        mover=temp;
     }
     return head;
    }
};