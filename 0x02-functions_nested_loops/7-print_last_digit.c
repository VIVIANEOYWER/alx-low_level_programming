#include "main.h"

/**
 * print _last_digit - Prints the last digit of a number
 * @n: The number to be treated
 * Return: Value of the last digit or number
 */

int print_last_digit(int n)

{
	int last;

	Last = n % 10;
	if (last < 0)
	{
	Last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
