#include "holberton.h"
/**
 * print_chessboard - print all elements of two dimensional array
 * @a: pointer
 *
 */

void print_chessboard(char (*a)[8])
{
	int count, count2;

	for (count = 0; count < 8; count++)
	{
		for (count2 = 0; count2 < 8; count2++)
		{
			_putchar(a[count][count2]);
		}
		_putchar('\n');
	}
}
