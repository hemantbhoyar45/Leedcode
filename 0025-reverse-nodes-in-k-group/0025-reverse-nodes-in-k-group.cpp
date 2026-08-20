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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if (head == NULL) {
          return NULL;
     }
        // Step 1: Check if there are at least k nodes
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }

        if (count < k) return head;

        // Step 2: Reverse first k nodes
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = NULL;
        count = 0;

        while (curr != NULL && count < k) {
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
            count++;
        }

        // Step 3: Recursive call for remaining list
        if (forward != NULL)
            head->next = reverseKGroup(forward, k);

        // Step 4: prev becomes the new head of this group
        return prev;
    }
};
