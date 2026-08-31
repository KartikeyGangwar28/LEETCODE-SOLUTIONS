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
    int l=0;
    while(temp){
       l++;
       temp=temp->next;
    }
    return l;
}
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {//trace the difference bw two adjacent lasts as well;
     int l=length(head);
     if(l<=2)return{-1,-1};
     ListNode*prev=head;
     ListNode*curr=prev->next;
     ListNode*next=curr->next; 
     int first=INT_MAX,last=INT_MIN,count=1,mn=INT_MAX,mx=INT_MIN;
     while(next){
        if(curr->val>prev->val&&(curr->val>next->val)){
         //   int test=first;
             first=min(first,count);
             int prev=last;
             last=max(last,count);
             if(first!=last){
               mn=min({mn,abs(first-last),abs(prev-last)});
              }
            mx=max(mx,abs(first-last));
             
        }
        else if(curr->val<prev->val&&(curr->val<next->val)){
            first=min(first,count);
            int prev=last;
            last=max(last,count);
            if(first!=last){
               mn=min({mn,abs(first-last),abs(prev-last)});
               }
            mx=max(mx,abs(first-last));
            
        }
        count++;
       prev=curr;
       curr=next;
       next=next->next;
     }  
    //  if(mn==0){
    //     mn=mx;
    //  }
    if(mn==INT_MAX||mx==INT_MIN){
        return {-1,-1};
    }
     return {mn,mx};
    }
};