// #include guards
#ifndef LINKED_LIST_NODE.H
#define LINKED_LIST_NODE.H

// Other headers used
#include "any_value.h"


/* Linked List Node */
struct LinkedListNode {
	LinkedListNode	*next;
	AnyValue	value;
}

/* Doubly Linked List Node pointing */
struct DoublyLinkedListNode {
	LinkedListNode *prev;
	LinkedListNode *next;
	AnyValue value;
}

/* Move to the next node in the linked list */
LinkedListNode *NextNode(LinkedListNode *self);


/* Get Current Node Value */
AnyValue GetValue(LinkedListNode *self);

#endif
