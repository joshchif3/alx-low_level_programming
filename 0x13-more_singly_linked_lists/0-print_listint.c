#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Description: This function iterates through a linked list of integers
 * and prints each element on a new line. It returns the number of nodes
 * in the linked list.
 *
 * Returns: The number of nodes in the linked list.
 */
size_t print_listint(const listint_t *h)
{
if (h == NULL) {
return 0;  // Empty list, no nodes to print
}

size_t num = 0;

do {
printf("%d\n", h->n);
num++;
h = h->next;
} while (h != NULL);

return num;
}
