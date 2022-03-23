#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: parent node (null if parent)
 * @value: data field
 * Return: return binary tree adress
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	node->parent = parent;
	node->n = value;
	return (node);
}