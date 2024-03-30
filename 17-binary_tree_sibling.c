#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#define max(a, b) (a > b ? a : b)


/**
 * binary_tree_sibling - sibling
 * @node: root node of the tree
 * Return: sibling of the tree
*/

binary_tree_t *binary_tree_sibling(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	else
		return (node->parent->left);
}

