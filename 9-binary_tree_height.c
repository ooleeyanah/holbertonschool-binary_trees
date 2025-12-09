#include "binary_trees.h"
/**
 * binary_tree_height - measures bt height
 * @tree: pointer to root node
 * Return: height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_h, right_h;
if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
return (0);
left_h = binary_tree_height(tree->left);
right_h = binary_tree_height(tree->right);
return ((left_h > right_h ? left_h : right_h) + 1);
}
