#include "holberton.h"

/**
 * print_alphabet_x10 - 10 times
 *
 * Return: Always 0
 */
int _isalpha(int c)
{
        if( (c >= 65 && c <= 90) || (c >= 97 && c <= 122) ){
		return(1);
	}
	else{
		return(0);
	}
}
