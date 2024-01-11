#include "binary_trees.h"

#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Description: If tree or func is NULL, do nothing. This function will apply
 * the func to each node of the tree in pre-order traversal.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
