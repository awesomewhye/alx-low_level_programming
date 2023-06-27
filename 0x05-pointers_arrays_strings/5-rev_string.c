#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: a character string
 */
void rev_string(char *s)
{
	char rev = s[0];
	int str = 0;
	int i;

	while (s[str] != '\0')
	{
		str++;
	}
	for (i = 0; i < str; i++)
	{
		str--;
		rev = s[i];
		s[i] = s[str];
		s[str] = rev;
	}
}

