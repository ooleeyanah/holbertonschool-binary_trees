#include "binary_trees.h"
/**
 * binary_tree_leaves - counts leaves in bt
 * @tree: pointer to root node
 * Return: leaf count or 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (1);
return (binary_tree_leaves(tree->left) +
binary_tree_leaves(tree->right));
}
