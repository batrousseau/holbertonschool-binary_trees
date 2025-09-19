#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_postorder - go through a tree in
 * postorder order
 * @tree: root node
 * @func: pointer to function taking an int as
 * parameter
 * Return: Nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
	{
		return;
	}
	if (tree == NULL)
	{
		return;
	}

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}

