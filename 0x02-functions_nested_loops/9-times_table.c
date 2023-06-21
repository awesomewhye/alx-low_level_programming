#include "main.h"
/**
 * times_table - prints the 9 times table.
 *
 * Returns: Always 0.
 */
void times_table(void)
{
	int l, m, n;

	for (l = 0; l <= 9; l++)
	{
		for (m = 0; m <= 9; m++)
		{
			n = l * m;

			_putchar(',');
			_putchar(' ');

			if (n <= 9)
			{
				_putchar(' ');
				_putchar(n);
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
