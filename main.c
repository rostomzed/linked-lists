#include "linked_list.c"
#include <stdio.h>

// Main function to test the linked list
int main() {
    // Create a new linked list with a NULL head pointer
    struct Node* head = NULL;

    // Insert nodes with values 1, 2, 3, and 4 into the list
    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtEnd(&head, 3);
    insertAfter(head->next, 4);

    // Print the original linked list
    printf("Original linked list: ");
    printList(head);

    // Delete the node with key value 3 from the list
    deleteNode(&head, 3);

    // Print the updated linked list
    printf("Linked list after deleting node with key 3: ");
    printList(head);

    return 0;
}