#include "main.h"
/**
 *_islower - main function
 * @c: needed check
 * Return: void
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
