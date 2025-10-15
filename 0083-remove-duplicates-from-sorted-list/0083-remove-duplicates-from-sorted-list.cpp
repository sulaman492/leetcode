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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* first=head;
        ListNode* second=head->next;
        while(second!=nullptr){
            if(first->val==second->val){
                if(second->next==nullptr){
                    first->next=nullptr;
                    
                }
                second=second->next;
            }
            else{
                first->next=second;
                first=first->next;
                second=second->next;
            }
        }
        return head;
    }
};