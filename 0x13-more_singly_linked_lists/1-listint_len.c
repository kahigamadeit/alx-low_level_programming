#include "lists.h"
/**
 * listint_len - Returns the number of nodes in a list
 * @h: The head of the list
 *
 * Return: The number of nodes or 0
 */
size_t listint_len(const listint_t *h)
{
size_t numofElem = 0;
while (h != NULL)
{
numofElem++;
h = h->next;
}
return (numofElem);
}
