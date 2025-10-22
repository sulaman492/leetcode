class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (!head || !head->next) return true;

        // Step 1: Find middle
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: For odd length, skip the middle node
        if (fast != nullptr) {
            slow = slow->next;
        }

        // Step 3: Reverse the second half
        ListNode* prev = nullptr;
        while (slow) {
            ListNode* nextnode = slow->next;
            slow->next = prev;
            prev = slow;
            slow = nextnode;
        }

        // Step 4: Compare both halves
        ListNode* first = head;
        ListNode* second = prev;
        while (second) {
            if (first->val != second->val) return false;
            first = first->next;
            second = second->next;
        }

        return true;
    }
};
