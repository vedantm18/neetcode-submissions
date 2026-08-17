/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, Li
 de *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    void reorderList(ListNode* head) {
       vector<int>ans;
       ListNode *p=head;
       while(p!=NULL){
         ans.push_back(p->val);
         p=p->next;
       } 
       int start=1;
       int end=ans.size()-1;
       
       for(int j=0;j<(ans.size()/2);j++){
       int temp=ans[end];
       for(int i=end;i>start;i--){
          ans[i]=ans[i-1];
       }
       ans[start]=temp;
       start+=2;
       }
       p=head;
       for(int i=0;i<ans.size();i++){
          p->val=ans[i];
          p=p->next;
       }
    }
};
