#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - search the match and return left of string
 * @s: pointer
 * @c: character to match
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{

			return (s);
		}
		s++;
	}

	return (NULL);

}
