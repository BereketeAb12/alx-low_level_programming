#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/*
 * main - starting
 * @lstD- obtains last digit
 * Description: some ambigious and Complex stuff
 * Return: Returns a sentence
 */
int main(void)
{
int n;

srand(time(0));
	n = rand() - RAND_MAX / 2;
int lstD = n % 10; /* last digit*/

if (n > 5)
	{
	printf("Last digit of %d is %d and is greater that 5\n", n, lstD);
	}
	else if (n < 6 && n != 0)
	{
	printf("Last digit of %d is %d and is lesser than 6 and not 0\n", n, lstD);
	}
	else
	{
	printf("Last digit of %d is %d and is 0\n", n, lstD);
	}
	return (0);
}
