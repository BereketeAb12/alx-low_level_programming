#include <stdio.h>

/**
 * main - printing a #
 *
 * Description: letter numbers printing
 *
 * Return: return the letter
 */

int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
if (i == '9')
break;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
