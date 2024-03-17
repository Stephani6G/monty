#include "monty.h"
#include <stdlib.h>

/**
* free_stack - a function that frees a doubly linked list
*
* @head: head pointer to the stack
*/

void free_stack(stack_t *head)
{
	stack_t *temp;

	temp = head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

/**
* f_stack - function that prints the top
*
* @head: head of stack
* @counter: line count
*/

void f_stack(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 0;
}
