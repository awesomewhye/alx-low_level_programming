#include "main.h"
/**
  * more_numbers - prints 10times the numbers from 0-14;
  * followed by a new line
  * Return: 0
  */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b >= 10)
			{
				_putchar('1');
			}
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
