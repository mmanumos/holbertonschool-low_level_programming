#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenate every
 * argument in only one string
 *
 * @ac : equal to argc
 * @av : equal to argv
 *
 * Return: fail-Null succes-str
 */

char *argstostr(int ac, char **av)
{
	int c1, c2, c3 = 0, len = 0;

	char *str;

	if ((ac == 0) || (av == NULL))
	{
		return (NULL);
	}

	for (c1 = 0; c1 < ac ; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c2++)
		{
			len++;
		}
		len++;
	}

	len++;

	str = malloc(len * (sizeof(char)));

	if (str == NULL)
	{
		free(str);
		return (NULL);
	}

	for (c1 = 0; c1 < ac ; c1++)
	{
		for (c2 = 0; av[c1][c2] != '\0'; c2++)
		{
			str[c3] = av[c1][c2];
			c3++;
		}
		str[c3] = '\n';
		c3++;
	}
	str[c3] = '\0';
	return (str);
}
