#include "main.h"
/**
 * print_sign - print the sign of a number.
 *
 * @n: it is a charcater in the ASCII table.
 *
 * Return: 1 when n is greater than zero, 0 when its zero
 * and -1 if less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
