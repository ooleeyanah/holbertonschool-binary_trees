#include "binary_trees.h"
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
