#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes in bt
 * @tree: pointer to root node
 * Return: num of nodes or 0 if NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
return (binary_tree_nodes(tree->left) +
binary_tree_nodes(tree->right));
}
