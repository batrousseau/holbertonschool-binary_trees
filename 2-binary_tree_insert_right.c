#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert a new node as right child of
 * another node
 * @parent: parent of the node to insert
 * @value: data to insert in the new node
 * Return: pointer to new node or NULL if failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child = NULL;
	/*binary_tree_t *tmp = NULL;*/

	if (parent == NULL)
	{
		return (NULL);
	}

	right_child = malloc(sizeof(binary_tree_t));

	if (right_child == NULL)
	{
		return (NULL);
	}

	if (parent->right == NULL)
	{
		parent->right = right_child;
		right_child->parent = parent;
		right_child->n = value;
		right_child->left = NULL;
		right_child->right = NULL;
	}
	else
	{
		right_child->right = parent->right;
		parent->right = right_child;
		right_child->parent = parent;
		right_child->right->parent = right_child;
		right_child->n = value;
		right_child->left = NULL;
	}

	return (right_child);
}
