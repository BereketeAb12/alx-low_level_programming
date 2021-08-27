#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/*
 *main-starting
 *
 *Descriptions: some ambigious and Complex stuff
 */
int main(void)
{
	int n;
	int lastDigit = n % 10; /*Finding last digit*/
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	  printf("Last digit of %d is %d and is greater that 5\n", n, lastDigit);
	else if (n == 0)
	  printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	else
	  printf("Last digit of %d is %d and is lesser than 6 and not 0\n", n, lastDigit);
	return (0);
}
