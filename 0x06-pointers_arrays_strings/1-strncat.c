#include "main.h"
/**
 * _strncat - a function that concatenates two strings
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 * Return: @dest
 */

char *_strncat(char *dest, char *src, int n)
{
int x, y;

for (x = 0; dest[x] != '\0'; x++)
	;
for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
{
dest[x] = src[y];
}
return (dest);
}
