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
