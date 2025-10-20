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
    ListNode* rotateRight(ListNode* head, int k) {
      if(head==nullptr || head->next==nullptr){
        return head;
      }
      ListNode* temp=head;
      ListNode* temp1=head;
      ListNode* temp2=head;

      int size=1;
      while(temp->next!=nullptr){
        temp=temp->next;
        size++;
      }
      while(k>=size){
        k=k-size;
      }
      size=size-k;
      int i=1;
      while(i<size){
        temp2=temp2->next;
        i++;
      }
      temp->next=head;
      temp1=temp2->next;
      head=temp1;
      temp2->next=nullptr;
       return head;
    }
};