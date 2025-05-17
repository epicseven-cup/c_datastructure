#ifndef LINKED_LIST_NODE.H
#define LINKED_LIST_NODE.H


#include "linked_list_node.h"

/* Single Linked List */
struct SingleLinkedList {
	LinkedListNode *head;
	LinkedListNode *tail;
}

/* Single Linked List Methods */

/* SingleLinkedListSize: Get the size of linked list */
int SingleLinkedListSize(SingleLinkedList *self);

/* SingleLinkedListAppend: adding a single linked list node to the end of the linked list */
LinkedListNode *SingleLinkedListAppend(SingleLinkedList *self, AnyValue value);


/* SingleLinkedListPopEnd: remove a single linked list node to the end of the linked list */
LinkedListNode *SingleLinkedListPopEnd(SingleLinkedList *self);


/* SingleLinkedListPopStart: remove a single linked list node to the start of the linked list */
LinkedListNode *SingleLinkedListPopStart(SingleLinkedList *self);

/* SingleLinkedListGetHead: get the head of the single linked list */
LinkedListNode *SingleLinkedListGetHead(DoublyLinkedList *self);

/* SingleLinkedListGetTail: get the tail of the single linked list */
LinkedListNode *SingleLinkedListGetTail(DoublyLinkedList *self);



/* Doubly Linked List */
struct DoublyLinkedList {
	DoublyLinkedListNode *head;
	DoublyLinkedListNode *tail;
}

/* Doubly Linked List Methods */


/* DoublyLinkedListSize: Get the size of linked list */
int DoubleyLinkedListSize(DoublyLinkedList *self);

/* DoublyLinkedListAppend: adding a  doubly linked list node to the end of the linked list */
DoublyLinkedListNode *DoublyLinkedListAppend(DoublyLinkedList *self, AnyValue value);

/* DoublyLinkedListPopEnd: remove a  doubly linked list node to the end of the linked list */
LinkedListNode *DoubleyLinkedListPopEnd(DoublyLinkedList *self);

/* DoublyLinkedListPopStart: remove a  doubly linked list node to the start of the linked list */
LinkedListNode *DoubleyLinkedListPopStart(DoublyLinkedList *self);

/* DoublyLinkedListGetHead: get the head of the doubly linked list */
LinkedListNode *DoublyLinkedListGetHead(DoublyLinkedList *self);

/* DoublyLinkedListGetTail: get the tail of the doubly linked list */
LinkedListNode *DoublyLinkedListGetTail(DoublyLinkedList *self);


#endif
