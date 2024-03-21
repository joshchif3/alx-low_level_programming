#include "lists.h"

/*
 * print_dlistint - prints all the elements of a doubly linked list in dlistint_t list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current_node = h;	/* Pointer to traverse the list */
	size_t node_count = 0;	/* Counter to keep track of the number of nodes */

	/* Traverse the list and print each node's value */
	while (current_node != NULL)
	{
		printf("%i\n", current_node->n);	/* Print the value of the current node */
		node_count++;	/* Increment the node count */
		current_node = current_node->next;	/* Move to the next node */
	}

	return (node_count);	/* Return the total number of nodes */
}
