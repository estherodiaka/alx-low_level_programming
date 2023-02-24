#include "main.h"

/**
 * print_most_numbers - print from 0 - 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		if (!(i == 2 || i == 4))
			putchar(i + '0');
	}
	putchar('\n');
}
