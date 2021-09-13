#include "main.h"
/**
 *_memset - function start here
 *Return: array
 * @s: source string
 * @b: the constant byte for filling
 * @n: lenght of buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;

while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
