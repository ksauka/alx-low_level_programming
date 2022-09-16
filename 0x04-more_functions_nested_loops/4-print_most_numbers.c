#include "main.h"

/**
 * main -  function that does not print 2 and 4
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
