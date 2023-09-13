#include "main.h"
/**
 * print_to_98 - print all natural numbers from var to 98
 * print - print recursively using _putchar
 * @var: the starting limit
 */
void print(int n);
/**
 * @n: variable to print
 */

void print_to_98(int var)
{
	int stopLimit = 98;

	if (var > stopLimit)
	{
		int ii;

		for (ii = var; ii >= stopLimit; ii--)
		{
			print(ii);
			if (ii != stopLimit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int jj;

		for (jj = var; jj <= stopLimit; jj++)
		{
			print(jj);
			if (jj != stopLimit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

/**
 * print - to print
 * @n: var
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);
	_putchar(n % 10 + '0');
}
