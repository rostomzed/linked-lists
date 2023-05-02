# Linked lists in C

In this implementation, we define a struct Node that contains an integer data and a pointer to the next Node in the list. 

## Functions
We then define several functions to manipulate the linked list, including:
- `createNode` to create a new node
- `insertAtBeginning` to insert a new node at the beginning of the list
- `insertAtEnd` to insert a new node at the end of the list
- `insertAfter` to insert a new node after a given node
- `deleteNode` to delete a node with a given key
- `printList` to print the entire linked list

## Main function
In the `main` function of the program, we create a new linked list by initializing the head of the list to `NULL` using the statement `struct Node* head = NULL;`.

Next, we insert some nodes into the linked list using the functions `insertAtEnd`, `insertAtBeginning`, and `insertAfter`. Specifically, we insert the nodes with values `1`, `2`, `3`, and `4` into the list. The resulting linked list after these insertions is `2 -> 1 -> 4 -> 3 -> NULL`.

We then print the original linked list using the `printList` function.

After that, we delete a node with a key value of `3` from the list using the `deleteNode` function.

Finally, we print the resulting linked list again using the `printList` function.

So, the main function is essentially a test function that creates, manipulates, and prints the linked list to demonstrate how the various functions for manipulating the list work.

## Running the program

Here are the steps to compile and run the program:

Open the Terminal app on your Mac.

Navigate to the directory where the program source code file is saved using the cd command. For example, if the file is saved in the Desktop folder, you can use the command:

```bash
cd ~/Desktop
```
Compile the program using the following command:
```bash
gcc -o linked-list linked-list.c
```
This will create an executable file named `linked-list`.

Run the program using the following command:
```bash
./linked-list
```
This will execute the program and you should see the output in the Terminal window.