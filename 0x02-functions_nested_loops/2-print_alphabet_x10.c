#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabet 10 times
 */
void print_alphabet_x10(void)
{
	int i;
	char l;

	i = 0;

	while (i < 10)
	{
		for (l = 'a'; l <= 'z'; l++)
			_putchar(l);
		_putchar('\n');
		i++;
	}
}
