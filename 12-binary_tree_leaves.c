#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#define max(a, b) (a > b ? a : b)


/**
 * binary_tree_leaves - leaves
 * @tree: root node of the tree
 * Return: leaves of the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((tree->right == NULL && tree->left == NULL) +
	(binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left)));

}

