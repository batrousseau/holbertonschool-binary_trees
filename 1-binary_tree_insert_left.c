#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a new node as left child of
 * another node
 * @parent: parent of the node to insert
 * @value: data to insert in the new node
 * Return: pointer to new node or NULL if failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_child = NULL;
	/*binary_tree_t *tmp = NULL;*/

	if (parent == NULL)
	{
		return (NULL);
	}

	left_child = malloc(sizeof(binary_tree_t));

	if (left_child == NULL)
	{
		return (NULL);
	}

	if (parent->left == NULL)
	{
		parent->left = left_child;
		left_child->parent = parent;
		left_child->n = value;
		left_child->left = NULL;
		left_child->right = NULL;
	}
	else
	{
		left_child->left = parent->left;
		parent->left = left_child;
		left_child->parent = parent;
		left_child->left->parent = left_child;
		left_child->n = value;
		left_child->right = NULL;
	}

	return (left_child);
}
