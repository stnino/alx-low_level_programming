#include "main.h"
/**
 * main - this main function is a printer
 * Return: should return 0
 */
int main(void)
{
	char p[] = "_putchar";
	int r;

	int lenVar = sizeof(p) / sizeof(p[0]);

	for (r = 0; r < lenVar - 1; r++)
	{
		_putchar(p[r]);
	}
	
		_putchar('\n');

	return (0);
}
