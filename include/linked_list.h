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


/* SingleLinkedListPopEnd: start a single linkedlist node to the end of the linked list */
LinkedListNode *SingleLinkedListPopEnd(SingleLinkedList *self);


/* SingleLinkedListPopStart: Remove a single linkedlist node to the start of the linked list */
LinkedListNode *SingleLinkedListPopStart(SingleLinkedList *self);


/* Doubly Linked List */
struct DoublyLinkedList {
	DoublyLinkedListNode *head;
	DoublyLinkedListNode *tail;
}

/* Doubly Linked List Methods */

/* SingleLinkedListAppend: adding a single linkedlist node to the end of the linked list */
DoublyLinkedListNode *DoublyLinkedListAppend(SingleLinkedList *self, AnyValue value);


/* SingleLinkedListPopEnd: start a single linkedlist node to the end of the linked list */
LinkedListNode *SingleLinkedListPopEnd(SingleLinkedList *self);


/* SingleLinkedListPopStart: Remove a single linkedlist node to the start of the linked list */
LinkedListNode *SingleLinkedListPopStart(SingleLinkedList *self);


#endif
