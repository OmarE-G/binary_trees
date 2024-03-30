#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#define max(a, b) (a > b ? a : b)


/**
 * binary_tree_balance - balance
 * @tree: root node of the tree
 * Return: balance of the tree
*/

size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
	binary_tree_height(tree->right));

}

