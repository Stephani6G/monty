#include "monty.h"
#include <stdlib.>

/**
* f_rotr - function that rotates the stack to the bottom
*
* @head: stack head of the stack
*
* @counter: line count(lc)
*/

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
