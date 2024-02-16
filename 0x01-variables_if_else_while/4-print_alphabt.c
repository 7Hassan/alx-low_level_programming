#include <stdio.h>

/**
* main - entry point
* Description: prints the alphabet in lowercase, followed by a new line.
*
* Return: On success 0.
*/
int main(void)
{
char c = 97;

while (c != 123)
{
if (c != 'e' && c != 'q')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}
