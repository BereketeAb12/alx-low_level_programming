#include <stdio.h>
/**
 * main - printing size
 *
 * Description: DAtaTyPe
 *
 * Return: Zero again
 */
int main(void)
{
char Character;
int Integer;
long int LongInt;
long long int LongLongInt;
float floating;

printf("Size of a char: %d byte(s)\n", sizeof(Character));
printf("Size of a int: %d byte(s)\n", sizeof(Integer));
printf("Size of a long int: %d byte(s)\n", sizeof(LongInt));
printf("Size of a long long int: %d byte(s)\n", sizeof(LongLongInt));
printf("Size of a float: %d\n byte(s)", sizeof(floating));
return (0);
}
