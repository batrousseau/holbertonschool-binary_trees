#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * is_inferior - check which number
 * is the lowest
 * @a: an int
 * @b: an int
 * Return: lowest of the two
 */

int is_inferior(int a, int b)
{
	if (a <= b)
	{
		return (a);
	}
	else
	{
		return (b);
	}
}

/**
 * binary_tree_is_full - check if the tree is full
 * @tree: pointer to root of tree
 * Return: 1 if full, 0 if not or tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
int full = 0;
int left = 0;
int right = 0;


if (tree == NULL)
{
	return (0);
}

if (tree->left == NULL && tree->right == NULL)
{
	return (1);
}

if (tree->left == NULL || tree->right == NULL)
{
	return (0);
}

if (tree->left && tree->right)
{
	left = binary_tree_is_full(tree->left);
	right = binary_tree_is_full(tree->right);
	full = is_inferior(left, right);
	return (full);
}

return (404);
}
