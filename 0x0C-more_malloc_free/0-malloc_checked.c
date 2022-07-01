#include"main.h"
#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

/**
 *main - check the code
 *
 *
 *Return: Always 0.
 *
 */
void *malloc_checked(unsigned int b)
{
void *me;
int *mem;
me = malloc(b);
mem = malloc(b);
if (mem == NULL)
exit(98);
return (mem);
}
