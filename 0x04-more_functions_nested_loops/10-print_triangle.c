#include "main.h"
/**
 * print_triangle -  a function that prints a triangle,
 * followed by a new line.
 * @size: volume of triangle'
 * Return: 0
 */
void print_triangle(int size)
{
	int n, m, o;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (n = 1; n <= size; n++)
		{
			for (m = n; m < size; m++)
			{
				_putchar(32);
			}
			for (o = 1; o <= n; o++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
