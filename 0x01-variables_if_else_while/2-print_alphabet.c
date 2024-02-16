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
putchar(c);
putchar('\n');
c++;
}
return (0);
}
