#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#define max(a, b) (a > b ? a : b)


/**
 * binary_tree_size - size
 * @tree: root node of the tree
 * Return: size of the tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 +
	(binary_tree_size(tree->right) + binary_tree_size(tree->left)));

}

