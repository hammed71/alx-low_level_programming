#include "main.h"

/**
 * print_last_digit - print the last digit
 * @d: The last digit of the number
 * Return: value of the last digit
 */

int print_last_digit(int d)
{
	int k;

	if (d < 0)
		k = -1 * (d % 10);
	else
		k = d % 10;
	_putchar((k % 10) + '0');
	return (k % 10);
}
