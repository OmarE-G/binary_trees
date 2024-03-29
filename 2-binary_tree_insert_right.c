#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - bt node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: pointer
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		free(node), node = NULL;

	if (node)
	{
		node->left = NULL, node->right = NULL;
		node->n = value;

		if (parent->right == NULL)
			node->parent = parent, parent->right = node;
		else
			parent->right->parent = node, node->right = parent->right,
			parent->right = node, node->parent = parent;
	}

	return (node);
}
