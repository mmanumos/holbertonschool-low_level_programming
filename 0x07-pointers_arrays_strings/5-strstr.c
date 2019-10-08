#include "holberton.h"

/**
 * _strpbrk - count math of prefix of chain
 * @s: pointer
 * @accept: character to match
 *
 * Return: s
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, st;

	i = 0;
	while (haystack[i] != '\0');
	{
		st = i;
		j = 0;
		while (needle[j] == haystack[i] &&
		       haystack[i] != '\0' && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + st);

		i = st + 1;
	}
	return (0);
}
