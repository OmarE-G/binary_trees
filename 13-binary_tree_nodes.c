#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#define max(a, b) (a > b ? a : b)


/**
 * binary_tree_nodes - nodes
 * @tree: root node of the tree
 * Return: nodes of the tree
*/

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((tree->right || tree->left) +
	(binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left)));

}

