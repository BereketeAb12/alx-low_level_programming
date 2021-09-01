#include <stdio.h>

/**
 * main - printing a # plus leter base 16
 *
 * Description: letter numbers printing
 *
 * Return: return the letter
 */

int main(void)
{
int i, n;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (n = 'a'; n <= 'f'; n++)
putchar(n);
putchar('\n');
return (0);
}
