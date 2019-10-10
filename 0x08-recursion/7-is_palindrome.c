#include "holberton.h"

/**
 * is_palindrome - send the length
 * and the string to verify if is palindrome
 *
 *
 * @s : string to evaluate
 *
 * Return: 0 non-palindrome 1 yes-palindrome
 */

int is_palindrome(char *s)
{
	int ts = _strlen_recursion(s);

	if (ts <= 1)
	{
		return (1);
	}
	else
	{
		return (verify(s, ts));
	}
}


/**
 * verify - compare the given number
 * with the result of get_prime
 *
 * @ts : length of string
 * @str : given number
 *
 * Return: 0 or 1
 */


int verify(char *str, int ts)
{

	if (ts <= 0)
	{
		return (1);
	}
	if (str[0] == str[ts - 1])
	{
		return (verify(str + 1, ts - 2));
	}
	else
	{
		return (0);
	}

}


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
