#include "main.h"
/**
  * print_alphabet_x10 - prints the alphabets in lowercast 10 times
  *
  * Return: Always 0.
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
	_putchar('\n');
	}
}
