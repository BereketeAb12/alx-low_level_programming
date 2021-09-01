#include <stdio.h>

/**
 * main - printing a lowercase
 *
 * Description: letter array printing
 *
 * Return: return the letter
 */

int main(void)
{
int i, x;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
for (x = 'A'; x <= 'Z'; x++)
{
putchar (x);
}
putchar('\n');
return (0);
}
