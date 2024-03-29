#include "main.h"
/**
 * _strlen - return the length of the string.
 * @s: string.
 * Return: length.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
