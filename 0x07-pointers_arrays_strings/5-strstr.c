#include "holberton.h"

/**
 * _strstr - search exactly match
 * @haystack: string
 * @needle: substring to search
 *
 * Return: always 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, st;

	i = 0;
	while (haystack[i] != '\0')
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
