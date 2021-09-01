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
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (i == 'e')
continue;
if (i == 'q')
continue;
putchar(i);
}
putchar('\n');
return (0);
}
