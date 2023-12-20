#include "main.h"

/**
 * main - entry point
 * Description: prints _putchar using putchar prototype
 *
 * Return: On success 1.
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
