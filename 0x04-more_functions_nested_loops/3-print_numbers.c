#include "main.h"

/**
 *print_numbers - a function that prints the numbers, from 0 to 9
 *
 *print_numbers - prints 0123456789\n
 *
 *
 *
 *Return: Always 0.
 *
 *Return: void
 *
 */
void print_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
_putchar(c);
}
_putchar('\n');
return (0);

}
