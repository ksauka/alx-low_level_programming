#include "main.h"

/**
 * _islower - Check for lowercase chaater
 * @c: An input character
 * Description: the function prints lower alphabet with _printchar
 *
 * Return: 1 if if is lower or 0 if uppercase
 */

int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}
