#include <stdio.h>

/**
* main - entry point
* Description: prints the alphabet in lowercase, followed by a new line.
*
* Return: On success 0.
*/
int main(void)
{
char c1 = 97, c2 = 65;

while (c1 != 123)
{
putchar(c1);
c1++;
}

while (c2 != 91)
{
putchar(c2);
c2++;
}
putchar('\n');
return (0);
}
