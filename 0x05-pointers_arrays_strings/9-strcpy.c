#include "main.h"
#include <stdio.h>

/**
 *  _strcpy - a function that copies the string pointed to by src
 *
 *  @dest: A pointer to destination of string include *
 *  @src: A pointer to source string to copy from
 *  Return: Pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;
	return (aux);

}
