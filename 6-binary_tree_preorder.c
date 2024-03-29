#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traversal
 * @tree: root node of the tree
 * @func: function to print the node
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	func(tree->n);
	//binary_tree_preorder(tree->left, func);
	//binary_tree_preorder(tree->right, func);
}
