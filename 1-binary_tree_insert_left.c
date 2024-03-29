#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - bt node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: pointer
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		free(node), node = NULL;

	if (node)
	{
		node->left = NULL, node->right = NULL;
		node->n = value;

		if (parent->left == NULL)
			node->parent = parent, parent->left = node;
		else
			parent->left->parent = node, node->left = parent->left,
			parent->left = node, node->parent = parent;
	}

	return (node);
}
