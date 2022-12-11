#include <stdio.h>

/**
 * main - main function prit 0 to 15
 *
 * Return: 0 success
 */

int main(void)

{
int i;
char c = 'a';
for (i = 0; i < 16; i++)
{
if (i < 10)
{
putchar(i + '0');
}
else
{
putchar(c);
c++;
}
}
putchar('\n');

		return (0);
}
