#include "lists.h"



/**

 * print_listint - prints all the elements of a list.

 * @h: head of a list.

 *

 * Return: numbers of nodes.

 */

size_t print_listint(const listint_t *h)

{

	size_t nnodes = 0;



	while (h != NULL)

	{

		printf("%d\n", h->n);

		h = h->next;

		nnodes++;

	}

	return (nnodes);

}

 20  

0x13-more_singly_linked_lists/1-listint_len.c

@@ -0,0 +1,20 @@

#include "lists.h"



/**

 * listint_len - returns the number of elements in

 * a linked list.

 * @h: head of a list.

 *

 * Return: numbers of nodes.

 */

size_t listint_len(const listint_t *h)

{

	size_t nnodes = 0;



	while (h != NULL)

	{

		h = h->next;

		nnodes++;

	}

	return (nnodes);

}
