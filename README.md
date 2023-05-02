# Linked lists in C

## Contents
  - [Introduction](#introduction)
  - [Functions](#functions)
  - [Main function](#main-function)
  - [Running the program directly](#running-the-program-directly)
  - [Running the program using make](#running-the-program-using-make)
  - [Explaination of Makefile](#explaination-of-makefile)

## Introduction

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

## Running the program directly

Here are the steps to compile and run the program:

Open the Terminal app on your Mac.

Navigate to the directory where the program source code file is saved using the cd command.

```bash
cd ~/directory-name
```
Compile the program using the following command:
```bash
gcc -o linked_list main.c
```
This will create an executable file named `linked_list`.

Run the program using the following command:
```bash
./linked-list
```
This will execute the program and you should see the output in the Terminal window.

## Running the program using make

To run the program using make, simply run the following command:
```bash
make run
```
To build the program using make, simply run the following command:
```bash
make build
```
You will get an executable file named `linked_list`. You can then run it.

To clean up the executable file and other files created by make, simply run the following command:
```bash
make clean
```

## Explaination of Makefile

Here's a line-by-line explanation:

```bash
CC = gcc
CFLAGS = -Wall -g
```
These lines set the compiler (CC) to gcc and specify some flags (CFLAGS) to use when compiling. Specifically, `-Wall` tells the compiler to enable all warning messages, and `-g` tells the compiler to include debugging information in the executable.

```bash
clean:
    @echo "Cleaning up..."
    @rm -f linked_list
```
This is a rule that defines a `clean` target. When `make clean` is run, it will execute the commands in this rule. In this case, the rule simply prints a message and removes the linked_list executable.

```bash
build: clean
    @echo "Building linked_list..."
    @$(CC) $(CFLAGS) -o linked_list main.c
```
This is a rule that defines a `build` target. When `make build` is run, it will execute the commands in this rule. In this case, the rule first runs the `clean` target (to remove any existing linked_list executable), then prints a message and compiles `main.c` into an executable called `linked_list`.

```bash
run: build
    @echo "********************************"
    @echo "Running linked_list..."
    @echo "********************************"
    @echo "Output:"
    @./linked_list
```
This is a rule that defines a `run` target. When `make run` is run, it will execute the commands in this rule. In this case, the rule first runs the `build` target (to ensure that linked_list is up-to-date), then prints a message and runs the `linked_list` executable. The output of the executable is printed to the console.

The `@` symbols at the beginning of each command tell `make` to not print the command to the console before executing it. This makes the output of make cleaner and easier to read.