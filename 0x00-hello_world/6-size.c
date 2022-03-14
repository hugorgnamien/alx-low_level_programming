#include <stdio.h>
/**
 * main - Entry point
 *
 * Retun: Always 0 (Success)
 */
int main(void)
{
int a;
char d;
long b;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
printf("Size of a long: %lu byte(s)\n", (unsigned long)sizeof(b));
return (0);
}
