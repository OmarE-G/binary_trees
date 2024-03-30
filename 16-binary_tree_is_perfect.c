#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
#define max(a, b) (a > b ? a : b)

int perfect_tree_check(const binary_tree_t *tree, int h, int d);

/**
 * binary_tree_is_perfect - is_perfect
 * @tree: root node of the tree
 * Return: is_perfect of the tree
*/

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h = binary_tree_height(tree);

	if (tree == NULL)
		return (0);

	return (perfect_tree_check(tree, h, 0));

}

/**
 * perfect_tree_check - check
 * @tree: root node of the tree
 * @h: height
 * @d: depth
 * Return: leaves of the tree
*/

int perfect_tree_check(const binary_tree_t *tree, int h, int d)
{
	int children = 0;

	if (tree == NULL)
		return (1);

	children = (tree->right ? 1 : 0) + (tree->left ? 1 : 0);

	if ((children == 1) || (children == 0 && h != d))
		return (0);

	return ((perfect_tree_check(tree->left, h, d + 1) &
	perfect_tree_check(tree->right, h, d + 1)));


}



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
