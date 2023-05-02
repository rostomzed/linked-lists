#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the linked list
struct Node {
    int data;           // data stored in the node
    struct Node* next;  // pointer to the next node in the list
};

// Function to insert a new node at the end of the list
void insertAtEnd(struct Node** head_ref, int new_data) {
    // Allocate memory for a new node and assign its data value
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;

    // If the list is empty, make the new node the head of the list
    if (*head_ref == NULL) {
        *head_ref = new_node;
        return;
    }

    // Traverse the list to find the last node and append the new node
    struct Node* last_node = *head_ref;
    while (last_node->next != NULL) {
        last_node = last_node->next;
    }
    last_node->next = new_node;
}

// Function to insert a new node at the beginning of the list
void insertAtBeginning(struct Node** head_ref, int new_data) {
    // Allocate memory for a new node and assign its data value
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    // Make the new node the head of the list
    new_node->next = *head_ref;
    *head_ref = new_node;
}

// Function to insert a new node after a specified node
void insertAfter(struct Node* prev_node, int new_data) {
    // If the specified node is NULL, return
    if (prev_node == NULL) {
        printf("The given previous node cannot be NULL.\n");
        return;
    }

    // Allocate memory for a new node and assign its data value
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;

    // Insert the new node after the specified node
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

// Function to delete a node with the specified key value
void deleteNode(struct Node** head_ref, int key) {
    // If the head node contains the key value, remove it
    struct Node* temp = *head_ref, *prev;
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Traverse the list to find the node with the specified key value and remove it
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Node with key value %d not found.\n", key);
        return;
    }
    prev->next = temp->next;
    free(temp);
}

// Function to print the contents of the linked list
void printList(struct Node* node) {
    printf("Linked List: ");
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
