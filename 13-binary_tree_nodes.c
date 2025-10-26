#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with
 * at least one child
 * @tree: root node to consider
 * Return: Number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;
	size_t left = 0;
	size_t right = 0;
	size_t with_child = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left != NULL || tree->right != NULL)
	{
		with_child = 1;
	}

	left = binary_tree_nodes(tree->left);
	right = binary_tree_nodes(tree->right);
	nodes = with_child + left + right;
	return (nodes);
}
