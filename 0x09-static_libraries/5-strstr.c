#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring.
 * @haystack: input.
 * @needle: input.
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
