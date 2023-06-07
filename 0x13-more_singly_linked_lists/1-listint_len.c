#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @v: linked list of type listint_t to traverse
 * Return: number of nodes
 */
size_t listint_len(const listint_t *v)
{
	size_t num = 0;

	while (v != NULL)
	{
		num++;
		v = v->next;
	}

	return (num);
}
