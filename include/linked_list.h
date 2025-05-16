#ifndef LINKED_LIST_NODE.H
#define LINKED_LIST_NODE.H


#include "linked_list_node.h"

/* Single Linked List */
struct SingleLinkedList {
	LinkedListNode *head;
	LinkedListNode *tail;
}

/* Single Linked List Methods */

/* SingleLinkedListAppend: adding a single linkedlist node to the end of the linked list */
LinkedListNode *SingleLinkedListAppend(SingleLinkedList *self, AnyValue value);


/* SingleLinkedListRemoveEnd: adding a single linkedlist node to the end of the linked list */
LinkedListNode *SingleLinkedList(SingleLinkedList *self, AnyValue value);




/* Doubly Linked List */
struct DoublyLinkedList {
	DoublyLinkedListNode *head;
	DoublyLinkedListNode *tail;
}

/* Doubly Linked List Methods */


#endif
