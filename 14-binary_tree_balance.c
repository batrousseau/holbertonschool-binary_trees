#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * is_superior - compare two numbers
 * @a: first number
 * @b: second number
 * Return: the superior number
 */

int is_superior(int a, int b)
{
	if (a >= b)
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
int from_left = 0;
int from_right = 0;

if (tree == NULL)
{
	return (-1);
}

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);
from_left = tree->left ? 1 + left : 0;
from_right = tree->right ? 1 + right : 0;

height = is_superior(from_left, from_right);
return (height);
}

/**
 * binary_tree_balance - measures the balance factor
 * of a binary tree
 * @tree: pointer to root of the tree
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int balance = 0;
int left = 0;
int right = 0;

if (tree == NULL)
{
	return (0);
}

left = binary_tree_height(tree->left);
right = binary_tree_height(tree->right);

balance = left - right;

return (balance);
}
