#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, o;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			for (o = 0; o <= 9; o++)
			{
				if (n != m && n < m && m != o && m < o)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(o + '0');
					if (n == 7 && m == 8 && o == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
