#include "main.h"

/**
 * print_line -check description
 * Description: a function that draws a straight line in the terminal
 * @n: An input integer
 * Retun: Always 0
 */

void print_line(int n)
{
	int i = 0;
	
	if (n > 0)
	{
		for (; i <n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
