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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) {
            return head;
        }

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* fetch = NULL;

        head = curr;

        while(prev != NULL && curr != NULL){
            ListNode* farward = curr->next;
            curr->next = prev;
            prev->next = farward;

            if (fetch != NULL) {
                fetch->next = curr;
            }
            fetch = prev;
            prev = farward;

            if (prev != NULL) {
                curr = prev->next;
            } else {
                curr = NULL;
            }
        }
            return head;
        }
    };