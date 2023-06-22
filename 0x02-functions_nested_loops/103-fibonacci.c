#include <stdio.h>
/**
 * main - finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	unsigned long int m, o, next, sum;

	m = 1;
	o = 2;
	sum = 0;

	for (n =  1; n <= 33; ++n)
	{
		if (m < 4000000 && (m % 2) == 0)
		{
			sum = sum + m;
		}
		next = m + o;
		m = o;
		o = next;
	}

	printf("%lu\n", sum);

	return (0);
}
