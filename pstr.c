#include "monty.h"
/**
 * f_pstr - the function prints the string starting at
 * the top of the stack, followed by a new
 * @head: the stack head
 * @counter: the line_number
 * Return: there is no return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
