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
    ListNode* middleNode(ListNode* head) {
        int size=1;
        ListNode* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            size++;
        }
        size=size/2+1;
        int idx=1;
        ListNode* temp2=head;
        while(idx!=size)
        {
            temp2=temp2->next;
            idx++;
        }
        return temp2;
    }
};