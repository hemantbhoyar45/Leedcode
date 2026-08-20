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
    int len(ListNode* head){
       int cnt = 0;

         ListNode* temp = head;
         while(temp != NULL){
           temp = temp->next;
            cnt++;
         }
         return cnt;
   }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next ==  NULL){
            return head;
       }
     
       int n = len(head);
       vector<int> arr(n);
       int i = 0;
       ListNode* temp = head;
       while(temp != NULL){
         arr[(i + k) % n] = temp->val;
         temp = temp->next;
         i++;
       }

       ListNode* ans = new ListNode(arr[0]);
       ListNode* curr = ans;

       for(int i = 1;i < arr.size(); i++){
           ListNode* firstnode = new ListNode(arr[i]);
            curr -> next = firstnode;
            curr = firstnode;
            curr->next = NULL;
       }
       return ans;
    }
};