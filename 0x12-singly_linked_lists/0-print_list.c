#include "list.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - prints all elements
* @h: pointer
* Return: always 0
*/

size_t print_list(const list_t *h)
{
const list_t *tmp;
size_t i = 0;

if (h && h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
tmp = h;
if (tmp)
tmp = h;
while (tmp)
{
printf("[%d] %s\n", tmp->len, tmp->str);
i++;
tmp = tmp->next;
}
}
