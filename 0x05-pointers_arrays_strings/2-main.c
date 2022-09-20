#include "main.h"
#include <stdio.h>

/**
 * main -  check code
 *
 * Return: Always o
 */

int main(void)
{
	char *str;
	int len;

	str = "Holberton!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);

}
