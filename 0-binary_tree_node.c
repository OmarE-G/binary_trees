#include <stdio.h>
#include <stdlib.h>
#include "bt.h"

/**
 * binary_tree_node - bt node
 * @value: Integer stored in the node
 * @parent: Pointer to the parent node
 * Return: pointer
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));


	if (node)
	{
		node->left = NULL, node->right = NULL;
		node->n = value;
		node->parent = parent;
	}

	return (node);
}
