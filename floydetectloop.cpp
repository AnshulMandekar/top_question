Node* floydetectloop(Node* head){
    Node* slow = head;
    Node* fast = head;

    while(fast == NULL && slow == NULL){
        fast = fast->next;

        if(fast->next == NULL){
            fast = fast->next;
        }

        slow = slow -> next;

        if (slow == fast){
            return 1;
        }
    }
    return 0;
}

Node* floydetectloop(Node* head){
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL){
            return 0;
        }

        ListNode* slow = head;
        ListNode* fast = head;

        while( fast != NULL && fast->next != NULL){
            fast = fast->next->next;


            slow = slow->next;
            if(slow == fast){
                return 1;
            }
        }
        return 0;
        
    }
};
