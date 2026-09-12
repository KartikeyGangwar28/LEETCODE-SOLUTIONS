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
ListNode*generate(vector<int>&v){
    ListNode*head=new ListNode(v[0]);
    ListNode*mover=head;
    int n=v.size();
     for(int i=1;i<n;i++){
        ListNode*temp=new ListNode(v[i]);
        mover->next=temp;
        mover=temp;
     } 
     return head;
}
    ListNode* reverseKGroup(ListNode* head, int k) {
        vector<int>v;
        ListNode*temp=head;
        while(temp){
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        int x=0;
        int i=0,j=i;
        while(x<n){
           // cout<<"muhehe\n";
  for(i=x,j=i+k-1;i<n&&j<n&&i<j;i++,j--){
            swap(v[i],v[j]);
        }
        x+=k;
//cout<<x<<"\n";
        }
        // for(int x:v)cout<<x<<" ";
        // return temp;
      
      head=generate(v);
      return head;
    
    }
};