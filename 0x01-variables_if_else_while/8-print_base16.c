#include <stdio.h>

/**
 * main - print single digits in base 10
 * Return: Always 0
 */
int main(void)
{
	int i;
	char ia;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (ia = 'a'; ia <= 'f'; ia++)
		putchar(ia);

	putchar('\n');
	return (0);
}
