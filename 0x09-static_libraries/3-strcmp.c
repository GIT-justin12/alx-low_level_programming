#include "main.h"

/**
 * _strcmp - a function that compares 2 strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: The difference in s1 and s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
