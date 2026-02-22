# holbertonschool-binary_trees

## Description
Ce projet porte sur l'implémentation et la manipulation des arbres binaires en langage C. L'objectif est de comprendre les structures de données hiérarchiques, les différents modes de parcours (pré-ordre, en-ordre, post-ordre) ainsi que les mesures spécifiques aux arbres telles que la hauteur, la profondeur, la taille et le facteur d'équilibre.

## Requirements
- OS: Ubuntu 20.04 LTS
- Style: Betty
- Compilation: gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o binary_trees

## Tasks
| File | Description | Prototype |
| --- | --- | --- |
| 0-binary_tree_node.c | Crée un nouveau nœud d'arbre binaire. | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);` |
| 1-binary_tree_insert_left.c | Insère un nœud comme enfant gauche d'un autre nœud. | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);` |
| 2-binary_tree_insert_right.c | Insère un nœud comme enfant droit d'un autre nœud. | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);` |
| 3-binary_tree_delete.c | Supprime un arbre binaire entier. | `void binary_tree_delete(binary_tree_t *tree);` |
| 4-binary_tree_is_leaf.c | Vérifie si un nœud est une feuille. | `int binary_tree_is_leaf(const binary_tree_t *node);` |
| 5-binary_tree_is_root.c | Vérifie si un nœud est une racine. | `int binary_tree_is_root(const binary_tree_t *node);` |
| 6-binary_tree_preorder.c | Parcourt un arbre binaire en utilisant le parcours pré-ordre. | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));` |
| 7-binary_tree_inorder.c | Parcourt un arbre binaire en utilisant le parcours en-ordre. | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));` |
| 8-binary_tree_postorder.c | Parcourt un arbre binaire en utilisant le parcours post-ordre. | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));` |
| 9-binary_tree_height.c | Mesure la hauteur d'un arbre binaire. | `size_t binary_tree_height(const binary_tree_t *tree);` |
| 10-binary_tree_depth.c | Mesure la profondeur d'un nœud dans un arbre binaire. | `size_t binary_tree_depth(const binary_tree_t *node);` |
| 11-binary_tree_size.c | Mesure la taille d'un arbre binaire. | `size_t binary_tree_size(const binary_tree_t *tree);` |
| 12-binary_tree_leaves.c | Compte les feuilles d'un arbre binaire. | `size_t binary_tree_leaves(const binary_tree_t *tree);` |
| 13-binary_tree_nodes.c | Compte les nœuds avec au moins un enfant dans un arbre binaire. | `size_t binary_tree_nodes(const binary_tree_t *tree);` |
| 14-binary_tree_balance.c | Mesure le facteur d'équilibre d'un arbre binaire. | `int binary_tree_balance(const binary_tree_t *tree);` |
| 15-binary_tree_is_full.c | Vérifie si un arbre binaire est plein. | `int binary_tree_is_full(const binary_tree_t *tree);` |
| 16-binary_tree_is_perfect.c | Vérifie si un arbre binaire est parfait. | `int binary_tree_is_perfect(const binary_tree_t *tree);` |
| 17-binary_tree_sibling.c | Trouve le frère d'un nœud. | `binary_tree_t *binary_tree_sibling(binary_tree_t *node);` |
| 18-binary_tree_uncle.c | Trouve l'oncle d'un nœud. | `binary_tree_t *binary_tree_uncle(binary_tree_t *node);` |

## Author
[batrousseau](https://github.com/batrousseau)