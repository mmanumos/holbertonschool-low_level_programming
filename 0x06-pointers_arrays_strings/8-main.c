#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Talk is cheap. Show me the code ([#CisFun, #CisAwesome])\n";
	char *p;

	p = rot13(s);
	printf("%s", p);
	/*printf("------------------------------------\n");*/
	putchar('\n');
	/*printf("%s", s);*/
	/*printf("------------------------------------\n");*/
        putchar('\n');
	p = rot13(s);
	/*printf("%s", p);*/
	/*printf("------------------------------------\n");*/
	putchar('\n');
	printf("%s", s);
	/*printf("------------------------------------\n");*/
	putchar('\n');
	p = rot13(s);
	printf("%s", p);
	putchar('\n');
	/*printf("------------------------------------\n");*/
	printf("%s", s);
	return (0);
}
