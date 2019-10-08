#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - count math of prefix of chain
 * @s: pointer
 * @accept: character to match
 *
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int count, count2;

	for (count = 0; s[count]; count++)
	{
		for (count2 = 0; accept[count2]; count2++)
		{
			if (s[count] == accept[count2])
				break;
		}

		if (!accept[count2])
			break;
	}

	return (count);
}
