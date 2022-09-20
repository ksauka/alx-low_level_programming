#include <unistd.h>

/**
 * _putchar - print character 
 * @c: The character to print
 *
 * Return: Always 1 on error -1 is retured
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
