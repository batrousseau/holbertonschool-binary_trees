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

if (from_left >= from_right)
{
	height = from_left;
}
else
{
	height = from_right;
}

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

	if (left <= right)
	{
		full = left;
	}
	else
	{
		full = right;
	}

	return (full);
}

return (404);
}


/**
 * binary_tree_is_perfect - checks if a tree is perfect
 * @tree: root node
 * Return: 1 if perfect, 0 if not or root NULL
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int balanced = 0;
	int full = 0;
	int perfect = 0;
	int leaf_number = 0;

	if (tree == NULL)
	{
		return (0);
	}

	balanced = binary_tree_balance(tree);
	full = binary_tree_is_full(tree);
	leaf_number = binary_tree_leaves(tree);

	if (balanced == 0 && full == 1 && (leaf_number % 2 == 0 || leaf_number == 1))
	{
		perfect = 1;
	}
	else
	{
		perfect = 0;
	}

	return (perfect);
}
