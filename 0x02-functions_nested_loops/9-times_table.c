#include "main.h"
/**
 * times_table - prints the 9 times table.
 *
 * Returns: Always 0.
 */
void times_table(void)
{
	int l, m;

	for (l = 0; l <= 9; l++)
	{
		for (m = 0; m <= 9; m++)
		{
			int n = l * m;

			if (m == 0)
			{
				_putchar(n + '0');
			}
			else if (n <= 9 && m != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
