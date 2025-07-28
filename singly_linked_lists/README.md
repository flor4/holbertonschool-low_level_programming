C - Singly linked lists

A data structure consisting of a group of nodes linked together linearly. Each node consists of data elements and a link to the next node.

A node is a collection of two sub-elements or parts. A data part that stores the element and a next part that stores the link to the next node. 
Linked List: A linked list is formed when many such nodes are linked together to form a chain. 
Each node points to the next node present in the order.


TASKS 
0. Print list

Write a function that prints all the elements of a list_t list:
- Return: the number of nodes.
- If str is NULL, we need to print [0](nil).
- In this task we are allowed to use the function printf.

Reminder: printf library is <stdio.h>.

1. List length

Write a function that returns the number of elements in a linked list_t list.
- Return: a number.

2. Add node

Write a function that adds a new node at the BEGINNING of a list_t list.
- Return: the address of the new element, or NULL if failed.
- str need to be duplicate and we are allowed to use strdup.

Reminder: strdup is a function that duplicate a string. the library is <string.h>
Example: char \*strdup(const char \*s);

3. Add node at the end

Write a function that adds a new node at the END of a list_t list.
- Return: the address of the new element, or NULL if failed.
- str needs to be duplicated as well and we can use strdup.

4. Free list

Write a function that frees a list_it list. 
- Return: free(). 





