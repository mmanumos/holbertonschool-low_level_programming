#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - get the length of string
 *
 * @s : String to get the length
 *
 * Return: total String
 */

int _strlen_recursion(char *s)
{
	int ts;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		ts = 1;
		return (ts += _strlen_recursion(s + 1));
	}
}
