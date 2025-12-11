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
return ((left_h > right_h ? left_h : right_h) +1);
}
/**
 * binary_tree_size - measures size of bianry tree
 * @tree: pointer to root node
 * Return: size or NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);
return (1 + binary_tree_size(tree->left)
+ binary_tree_size(tree->right));
}
/**
 * binary_tree_is_perfect - checks if bt is perfect
 * @tree: pointer to root node
 * Return: 1 or otherwise 0 if NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
size_t h, nodes, expected_nodes;
if (tree == NULL)
return (0);
h = binary_tree_height(tree);
nodes = binary_tree_size(tree);
expected_nodes = (1 << (h + 1)) - 1;
return (nodes == expected_nodes);
}
