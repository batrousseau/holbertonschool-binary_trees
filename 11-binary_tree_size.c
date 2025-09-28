#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a
 * binary tree
 * @tree: root node
 * Return: 0 if NULL, otherwise size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

size_t size = 0;
size_t left = 0;
size_t right = 0;

if (tree == NULL)
{
	return (0);
}

left = binary_tree_size(tree->left);
right = binary_tree_size(tree->right);

size = 1 + left + right;

return (size);
}
