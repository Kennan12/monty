#include "monty.h"

/**
 * rotl - Rotates the stack to the top
 * @stack: The head of the stack
 * @line_number: The line on wich the error occured
 *
 * Return: Nothing
 */
void rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *ccur = *stack;
	unsigned int temp = 0;
	(void) line_number;

	if (ccur && ccur->next)
	{
		while (ccur->next != NULL)
		{
			temp = ccur->n;
			ccur->n = ccur->next->n;
			ccur->next->n = temp;
			ccur = ccur->next;
		}
	}
}
