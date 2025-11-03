#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - find the sibling of the
 * node (the other child of the parent)
 * @node: one of the child we look for sibling
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;
	binary_tree_t *sibling = NULL;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent;

	if (parent->left == NULL || parent->right == NULL)
	{
		sibling = NULL;
		return (sibling);
	}
	else
	{
		if (parent->left->n == node->n)
		{
			sibling = parent->right;
			return (sibling);
		}
		else
		{
			sibling = parent->left;
			return (sibling);
		}
	}

}
