#include "holberton.h"

/**
 * jack_bauer - 24 hrs
 *
 * Return: Always 0
 */

void jack_bauer(void)
{
	int hr1;
	int hr2;
	int hr3;
	int hr4;
	for (hr1 = 0; hr1 <= 2; hr1++){
		for (hr2 = 0; hr2 <= 3; hr2++){
			for (hr3 = 0; hr3 <= 5 ; hr3++) {
				for(hr4 = 0; hr4 <= 9; hr4++) {
					_putchar(hr1+ '0');
					_putchar(hr2+ '0');
					_putchar(':');
					_putchar(hr3+ '0');
					_putchar(hr4+ '0');
					_putchar('\n');
				}
			}
		}
	}


}
