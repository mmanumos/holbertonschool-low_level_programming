#include "holberton.h"

/**
 * jack_bauer - 24 hrs
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hr1;
	int min;

        for(hr1 = 0 ; hr1 <= 23; hr1++){
		for(min = 0; min <= 59; min++){
			_putchar((hr1 / 10 )+ '0');
			_putchar((hr1 % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}


}
