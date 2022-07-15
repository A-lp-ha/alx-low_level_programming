#include "list.h"

/**
* list_len - finds the number of elements
@h: pointer
Return: always 0
*/

size_t list_len(const list_t *h)
{
const list_t *tmp;
unsigned int i;

tmp = h;
for (i = 0; tmp; i++)
tmp = tmp->next;
return (i);
}
