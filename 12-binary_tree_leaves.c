#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves- count leaves of a
 * binary tree
 * @tree: root node to count from
 * Return: 0 if tree is NULL, otherwise leafs
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t leafs = 0;
size_t left = 0;
size_t right = 0;


if (tree == NULL)
{
	return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
	return (1);
}

left = binary_tree_leaves(tree->left);
right = binary_tree_leaves(tree->right);

leafs = left + right;

return (leafs);
}
