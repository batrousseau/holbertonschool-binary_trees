#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of
 * a binary tree
 * @tree: tree to measure
 * Return: Height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{

size_t height = 0;
int left = 0;
int right = 0;

if (tree == NULL)
{
	return (0);
}

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

if (left > right)
{
	height = 1 + left;
}
else
{
	height = 1 + right;
}


return (height);
}
