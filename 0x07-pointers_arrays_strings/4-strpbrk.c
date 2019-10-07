#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrkw - count math of prefix of chain
 * @s: pointer
 * @accept: character to match
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int count, count2;

	for (count = 0; s[count] != '\0'; count++)
	{
		for (count2 = 0; accept[count2] != '\0'; count2++)
		{
			if (s[count] == accept[count2])
				return (s + count);
		}
	}
	return (0);
}
