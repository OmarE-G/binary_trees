#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#define max(a, b) (a > b ? a : b)


/**
 * binary_tree_is_full - is_full
 * @tree: root node of the tree
 * Return: is_full of the tree
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (((tree->left != NULL && tree->right != NULL) ||
	 (tree->left == NULL && tree->right == NULL)) &
	((tree->left && tree->right) ?
	(binary_tree_is_full(tree->left) & binary_tree_is_full(tree->right)) : 1));

}

