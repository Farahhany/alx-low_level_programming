#include "lists.h"

/**
 * list_len - length
 * @h: ..
 *
 * Return: size
*/

size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		h = h->next;
		x++;
	}
	return (x);
}
