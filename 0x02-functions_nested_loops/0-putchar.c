#include "main.h"

/**
 * main - entry point
 * Description: prints _putchar using putchar prototype
 *
 * Return: On success 1.
 */
int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	_putchar('\n');

	return (0);
}
