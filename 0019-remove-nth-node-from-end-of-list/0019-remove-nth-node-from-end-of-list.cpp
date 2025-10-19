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
        if(head==nullptr){
            return head;
        }
        if(head->next==nullptr){
            return head=nullptr;
        }
        ListNode* first=head;
        ListNode* temp=head;
        int size=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            size++;
        }
        // size=size-n;
        
        int i=1;
        while(i<size-n){
            first=first->next;
            i++;
        }
        if(size-n==0){
            head=head->next;
            delete first;
            return head;
        }
        if(first->next==nullptr){
            first=nullptr;
        }
        else if(first->next->next!=nullptr){
            first->next=first->next->next;
        }
        else{
            first->next=nullptr;
        }
        return head;
    }
};