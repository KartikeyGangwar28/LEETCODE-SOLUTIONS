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
vector<int>arr;
ListNode*generate(vector<int>&arr){
    int n=arr.size();
    if(n<1)return nullptr;
    ListNode*start=new ListNode(arr[0]);
    ListNode*mover=start;
    for(int i=1;i<n;i++){
        ListNode*temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return start;
}
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head->next;
        int sum=0;
        while(temp){
          if(temp->val==0){
            arr.push_back(sum);
            sum=0;
          }
          else{
               sum+=temp->val;   
          }
          temp=temp->next;
        }
       // for(int x:arr)cout<<x<<" ";
       return generate(arr);
    }
};