#include "main.h"

/**
 * print_most_numbers -  Check description
 * Description: a function that prints the number
 * from 0-9
 *
 * Return: Alwas 0
 */

void print_most_numbers(void)

{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
