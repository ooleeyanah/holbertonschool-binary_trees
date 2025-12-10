#include "binary_trees.h"
/**
 * binary_tree_height - measure height of bt
 * @tree: pointer to root node
 * Return: measure of balance or 0 if NULL
 */
int binary_tree_height(const binary_tree_t *tree)
{
size_t left_h = 0, right_h = 0;
if (tree == NULL)
return (0);
if (tree->left)
left_h = 1 + binary_tree_height(tree->left);
if (tree->right)
right_h = 1 + binary_tree_height(tree->right);
return (left_h > right_h ? left_h : right_h);
}
/**
 * binary_tree_balance - measures balance of bt
 * @tree: pointer to root node
 * Return: balance or 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
int left_h, right_h;
if (tree == NULL)
return (0);
left_h = (tree->left ? (int)binary_tree_height(tree->left) + 1 : 0);
right_h = (tree->right ? (int)binary_tree_height(tree->right) + 1 : 0);
return (left_h - right_h);
}
