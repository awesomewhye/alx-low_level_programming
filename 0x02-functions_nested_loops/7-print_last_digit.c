#include "main.h"
/**
  * print_last_digit - prints last digit of a number
  *
  * @n: represents an integer.
  *
  * Return: the value of the last digit.
  */
int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
	{
		_putchar(-m + '0');
		return (-m);
	}
	else
	{
		_putchar(m + '0');
		return (m);
	}
	_putchar('\n');
}
