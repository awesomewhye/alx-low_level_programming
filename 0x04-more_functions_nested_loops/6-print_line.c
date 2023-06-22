#include "main.h"
/**
  * print_line - a function that draws a straight line in the terminal
  * @n: is the number of times the line should be drawn.
  * Return: 0
  */
void print_line(int n)
{
	int c;

	for (c = 1 ; c <= n; c++)
	{
		if (n < 1)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	_putchar('\n');
}
