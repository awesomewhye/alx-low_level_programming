#include "main.h"
/**
  * jack_bauer - prints every minutes of the day from 00:00 t0 23:59.
  *
  * Return: Always 0
  */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = i; j <= 59; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
