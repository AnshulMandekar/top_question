Node* sortList(Node *head) {
    Node* temp = head;
    int cntZero = 0, cntOne = 0, cntTwo = 0;

    // First pass: count occurrences of 0, 1, and 2
    while (temp != NULL) {
        if (temp->data == 0) {
            cntZero++;
        } else if (temp->data == 1) {
            cntOne++;
        } else if (temp->data == 2) {
            cntTwo++;
        }
        temp = temp->next;
    }

    // Reset temp to head to start modifying the list
    temp = head;

    // Second pass: overwrite the data in nodes
    while (cntZero--) {
        temp->data = 0;
        temp = temp->next;
    }
    while (cntOne--) {
        temp->data = 1;
        temp = temp->next;
    }
    while (cntTwo--) {
        temp->data = 2;
        temp = temp->next;
    }

    return head;  // Return the head of the sorted list
}
