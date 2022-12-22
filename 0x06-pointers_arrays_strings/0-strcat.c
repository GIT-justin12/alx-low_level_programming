#include "min.h"

/**
 * _strcat - concatennates two strings
 * @dest: copy to@src; copy from
 * @src: copy from
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
