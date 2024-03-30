#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#define max(a, b) (a > b ? a : b)




/**
 * binary_tree_height - height
 * @tree: root node of the tree
 * Return: Height of the tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (max(
		(tree->left ? 1 + binary_tree_height(tree->left) : 0),
		(tree->right ? 1 + binary_tree_height(tree->right) : 0)
		));
}

/**
 * binary_tree_balance - balance
 * @tree: root node of the tree
 * Return: balance of the tree
*/

size_t binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return ((tree->left ? binary_tree_height(tree->left) + 1 : 0) -
	(tree->right ? binary_tree_height(tree->right) + 1 : 0));

}

