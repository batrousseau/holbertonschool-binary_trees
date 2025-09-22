#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * is_superior - compare two numbers
 * @a: first number
 * @b: second number
 * Return: the superior number
 */

int is_superior (int a, int b)
{
	if( a >= b)
	{
		return (a);
	}
	else 
	{
		return (b);
	}

}

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
	return (-1);
}

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

height = 1 + is_superior(left, right);

return (height);
}
