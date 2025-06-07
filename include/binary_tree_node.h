// #include guards
#ifndef BINARY_TREE_NODE_H
#define BINARY_TREE_NODE_H

// Other headers used
#include "any_value.h"


struct BinaryTreeNode{
	BinaryTreeNode *left;
	BinaryTreeNode *right;
	AnyValue value;
};


/* Get the left binary tree node */
BinaryTreeNode *GetLeftNode(BinaryTreeNode *self);

/* Get the right binary tree node */
BinaryTreeNode *GetRightNode(BinaryTreeNode *self);

/* Get current node value */
AnyValue GetValue(BinaryTreeNode *self);

#endif
