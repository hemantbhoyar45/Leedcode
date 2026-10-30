/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    void insertatTail(Node* &head , Node* &tail , int data){
         Node* temp = new Node(data);
         if(head == NULL){
            head = temp;
            tail = temp;
         }else{
            tail->next = temp;
            tail = temp;
         }
    }

      
    Node* copyRandomList(Node* head) {
             if(head == NULL){
                return NULL;
             }

       Node* clonehead = NULL;
       Node* clonetail = NULL;
       Node* temp = head;

       while(temp != NULL){
         insertatTail(clonehead , clonetail , temp->val);
         temp = temp->next;
       }

       Node* cloneNode = clonehead;
       Node* originalNode = head;
       
       unordered_map<Node* , Node*> mapping;

       while(originalNode != NULL && cloneNode != NULL){
            mapping[originalNode] = cloneNode;
            originalNode  =  originalNode -> next;
            cloneNode = cloneNode->next;
       }

      cloneNode = clonehead;
      originalNode = head;
      
      while(originalNode != NULL && cloneNode != NULL){
           cloneNode->random =  mapping[originalNode -> random];
            originalNode  =  originalNode -> next;
            cloneNode = cloneNode->next;
       }
      return clonehead;
    }
};