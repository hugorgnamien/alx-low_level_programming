#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the alphabetic
 *
 * Return: Always (Success)
 */
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
putchar('\n');
return (0);
}
