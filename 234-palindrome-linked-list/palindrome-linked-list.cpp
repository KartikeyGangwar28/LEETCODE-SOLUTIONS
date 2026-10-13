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
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr)return true;
        ListNode*temp=head;
        // stack<int>st;
        string s="";
        while(temp){
            // if(st.size()==0||st.top()!=temp->val){
            //     st.push(temp->val);
            // }
            // else if(st.top()==temp->val){
            //     st.pop();
            // }
            s+=temp->val+'0';
          temp=temp->next;

        }
        string x="";
      int z=s.size();
      for(int i=z-1;i>=0;i--){
        x+=s[i];
      }
        return x==s;
     //return st.empty();
            
        
    }
};