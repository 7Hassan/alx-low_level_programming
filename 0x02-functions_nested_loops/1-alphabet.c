#include "main.h"

/**
 * print_alphabet - utilies on putchar
 *		a to z
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
