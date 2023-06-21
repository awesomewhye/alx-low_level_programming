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
		_putchar(48);
		for (m = 0; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			n = l * m;

			if (n <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
	}
	_putchar('\n');
}
