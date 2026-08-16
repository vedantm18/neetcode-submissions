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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       if(n==1 && head->next==NULL){
        return NULL;
       }
       int count=0;
        ListNode *p=head;
       ListNode *prev=NULL;
       while(p!=NULL){
          count++;
          p=p->next;
       }
       int ans=count-n;
       if(ans == 0) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }
       int count2=0;
       p=head;
       while(p->next!=NULL && count2<ans){
          prev=p;
          p=p->next;
          count2++;
       }
       ListNode *temp=p;
       prev->next=p->next;
       delete temp;


       return head;
    }
};
