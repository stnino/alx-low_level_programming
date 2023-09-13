#include "main.h"

/**
 * print_alphabet_x10 - main function
 * Return: void int not needed
 */
void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		int b;

		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');

		a++;
	}
}
