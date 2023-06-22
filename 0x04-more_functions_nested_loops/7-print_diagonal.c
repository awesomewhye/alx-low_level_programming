#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 * Return: 0
 */
void print_diagonal(int n)
{
	int a, b;

	for (a = 1; a <= n; a++)
	{
		for (b = 1; b <= n; b++)
		{
			if (n < 1)
			{
				_putchar('\n');
				break;
			}
			else if (b == a)
			{
				_putchar(92);
			}
			else if (b < a)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
